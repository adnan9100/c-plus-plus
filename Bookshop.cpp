#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Bookshop
{
private:
    string bookID;
    string bookName;
    string authorName;
    int numberOfBooks;

public:
    void addBook()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Name: ";
        cin.ignore(); // Clear newline from previous input
        getline(cin, bookName); // Read entire line
        cout << "Enter Author Name: ";
        getline(cin, authorName);
        cout << "Enter Number of Books: ";
        cin >> numberOfBooks;

        ofstream File("books.txt", ios::app);
        File << bookID << " " << bookName << " " << authorName << " " << numberOfBooks << "\n";
        File.close();
    }

    void deleteBook()
    {
        string id;
        cout << "Enter book ID to delete: ";
        cin >> id;

        ifstream inFile("books.txt");
        ofstream tempFile("temp.txt");

        while (inFile >> bookID >> bookName >> authorName >> numberOfBooks)
        {
            if (bookID != id)
            {
                tempFile << bookID << " " << bookName << " " << authorName << " " << numberOfBooks << "\n";
            }
        }

        inFile.close();
        tempFile.close();

        // Rename temp file to original file
        remove("books.txt");
        rename("temp.txt", "books.txt");
    }
};

int main()
{
    Bookshop myBookshop;
    // Call methods as needed
    return 0;
}


            
        
 
   
   

        
   