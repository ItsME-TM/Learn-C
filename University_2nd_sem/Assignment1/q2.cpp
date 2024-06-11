#include <iostream>
using namespace std;
class Book
{
private:
    string title, author, ISBN, edition;
    int currentPage, noOfPages;
public:
    Book(string title, string author, string ISBN, string edition, int noOfPages, int currentPage)
    {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
        this->edition = edition;
        this->noOfPages = noOfPages;
        this->currentPage = currentPage;
    }
    Book()
    {
        title = " ";
        author = " ";
        ISBN = " ";
        edition = " ";
        noOfPages = 0;
    }
    void setTitle(string title)
    {
        this->title = title;
    }
    void setAuthor(string author)
    {
        this->author = author;
    }
    void setISBN(string ISBN)
    {
        this->ISBN = ISBN;
    }
    void setEditoin(string edition)
    {
        this->edition = edition;
    }
    void setnoOfPages(int noOfPages)
    {
        this->noOfPages = noOfPages;
    }
    void setCurrentPage(int currentPage)
    {
        this->currentPage = currentPage;
    }
    void printDetails()
    {
        cout << "\n\nTitle :" << title;
        cout << "\nAuthor: " << author;
        cout << "\nISBN : " << ISBN;
        cout << "\nEDtion: " << edition;
        cout << "\nNumber of pages: " << noOfPages;
        cout << "\nCurrent Pages: " << currentPage;
    }
    int nextPage()
    {
        currentPage = currentPage + 1;
        return currentPage;
    }
    int previousPage()
    {
        currentPage = currentPage - 1;
        return currentPage;
    }
    int movePagesForward(int forwardAmount)
    {
        currentPage = currentPage + forwardAmount;
        if (currentPage > noOfPages)
        {
            currentPage = noOfPages;
            return currentPage;
        }
        else
        {
            return currentPage;
        }
    }
    int movePagesBackword(int backwardAmount)
    {
        currentPage = currentPage - backwardAmount;
        if (currentPage > 0)
        {
            return currentPage;
        }
        else
        {
            currentPage = 0;
            return currentPage;
        }
    }
    
};

class LibraryMember
{
private:
    string name;
    bool isSubscriptionVaild;
    string book1, book2;
public:
    LibraryMember(string name, bool isSubscriptionVaild)
    {
        this->name = name;
        this->isSubscriptionVaild = isSubscriptionVaild;
    }
    LibraryMember()
    {
        name = " ";
        isSubscriptionVaild = false;
    }
    void displayDetails()
    {
        cout << "\nName: " << name << " Subscription: " << isSubscriptionVaild << endl;
    }
};

int main()
{
    Book book1("Tin Tin", "Jhon", "2", " Second", 150, 148);
    Book book2("Tin Tin 2", "Jhon", "3", " Second", 250, 248);
    LibraryMember user1("Thushan Malaka", 1);
    user1.displayDetails();
    book1.printDetails();
    book1.nextPage();
    book1.printDetails();
    book2.printDetails();
    book2.nextPage();
    book2.printDetails();
    return 0;
}