import random
import time

WINDOW_SIZE = 4 # maximum window size
TIMEOUT = 5 # timeout in seconds

# Packet class
class Packet:
    def __init__(self, seqnum, ack=False):
        self.seqnum = seqnum
        self.ack = ack

# Random number generator for simulating packet loss
def is_packet_lost():
    return random.randint(1, 100) <= 20 # 20% chance of packet loss

# Main function
def main():
    expected_seqnum = 0
    next_seqnum = 0
    timer = 0

    sent_packets = []

    # Simulation loop
    while True:
        # Check if timeout has occurred
        if timer > TIMEOUT:
            print("Timeout occurred! Resending all packets in the window.")
            next_seqnum = expected_seqnum
            for packet in sent_packets:
                print(f"Resending packet with sequence number {packet.seqnum}")
                # TODO: send packet
            timer = 0

        # Check if all packets have been sent and acknowledged
        if expected_seqnum == 10:
            print("All packets sent and acknowledged successfully!")
            break

        # Check if there is space in the window to send a new packet
        if next_seqnum < expected_seqnum + WINDOW_SIZE:
            packet = Packet(next_seqnum)
            print(f"Sending packet with sequence number {packet.seqnum}")
            # TODO: send packet
            sent_packets.append(packet)
            next_seqnum += 1

        # Check if there are any incoming acknowledgements
        # TODO: receive packet
        ack_packet = Packet(-1, True) # invalid sequence number

        if not is_packet_lost() and ack_packet.seqnum >= expected_seqnum and ack_packet.seqnum < next_seqnum:
            print(f"Received acknowledgement for packet with sequence number {ack_packet.seqnum}")
            # Update expected sequence number
            expected_seqnum = ack_packet.seqnum + 1
            # Remove acknowledged packets from sent_packets list
            sent_packets = [packet for packet in sent_packets if packet.seqnum >= expected_seqnum]
            # Reset timer
            timer = 0

        # Increment timer and sleep for 1 second
        timer += 1
        time.sleep(1)

if __name__ == '__main__':
    main()
