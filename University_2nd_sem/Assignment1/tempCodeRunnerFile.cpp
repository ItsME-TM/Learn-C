#include <iostream>
using namespace std;
class Book
{
public:
    string title, author, ISBN, edition;
    int currentPage, noOfPages;
    Book(string title, string author, string ISBN, string edition, int noOfPages)
    {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
        this->edition = edition;
        this->noOfPages = noOfPages;
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
        cout << "Title: " << title << "\nCurrent page: " << currentPage;
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
public:
    string name;
    bool isSubscriptionVaild;
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
};

int main()
{
    Book book1("Tital", " Author", " ISBN", " edition", 200);
    book1.setCurrentPage(100);
    book1.printDetails();
    book1.setCurrentPage(150);
    book1.printDetails();
}