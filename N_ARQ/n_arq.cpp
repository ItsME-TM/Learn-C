#include <iostream>
#include <queue>
#include <ctime>
#include <cstdlib>

using namespace std;

const int WINDOW_SIZE = 4; // maximum window size
const int TIMEOUT = 5; // timeout in seconds

// Packet structure
struct Packet {
    int seqnum;
    bool ack;
};

// Random number generator for simulating packet loss
bool isPacketLost() {
    return (rand() % 100) < 20; // 20% chance of packet loss
}

int main() {
    srand(time(NULL)); // seed the random number generator

    int expectedSeqnum = 0;
    int nextSeqnum = 0;
    int timer = 0;

    queue<Packet> sentPackets;

    // Simulation loop
    while (true) {
        // Check if timeout has occurred
        if (timer > TIMEOUT) {
            cout << "Timeout occurred! Resending all packets in the window." << endl;
            nextSeqnum = expectedSeqnum;
            while (!sentPackets.empty()) {
                Packet packet = sentPackets.front();
                sentPackets.pop();
                cout << "Resending packet with sequence number " << packet.seqnum << endl;
                // TODO: send packet
            }
            timer = 0;
        }

        // Check if all packets have been sent and acknowledged
        if (expectedSeqnum == 10) {
            cout << "All packets sent and acknowledged successfully!" << endl;
            break;
        }

        // Check if there is space in the window to send a new packet
        if (nextSeqnum < expectedSeqnum + WINDOW_SIZE) {
            Packet packet;
            packet.seqnum = nextSeqnum;
            packet.ack = false;
            cout << "Sending packet with sequence number " << packet.seqnum << endl;
            // TODO: send packet
            sentPackets.push(packet);
            nextSeqnum++;
        }

        // Check if there are any incoming acknowledgements
        // TODO: receive packet
        Packet ackPacket;
        ackPacket.seqnum = -1; // invalid sequence number
        ackPacket.ack = true;

        if (!isPacketLost() && ackPacket.seqnum >= expectedSeqnum && ackPacket.seqnum < nextSeqnum) {
            cout << "Received acknowledgement for packet with sequence number " << ackPacket.seqnum << endl;
            // Update expected sequence number
            expectedSeqnum = ackPacket.seqnum + 1;
            // Remove acknowledged packets from sentPackets queue
            while (!sentPackets.empty() && sentPackets.front().seqnum < expectedSeqnum) {
                sentPackets.pop();
            }
            // Reset timer
            timer = 0;
        }

        // Increment timer and sleep for 1 second
        timer++;
        sleep(1);
    }

    return 0;
}
