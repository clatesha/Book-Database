//APPLICATION file FletcherCProj9.cpp
//This program creates a database of books that are stored
//by author's name
//It uses the class Book found in Book.h

//Cheron Fletcher
//July 24, 2020

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include "Book.h"
using namespace std;
using namespace BookDatabase;

//Function:
void AddNewBook(vector<Book>& bookinfo);
//Add new book info. Author, title, date
void PrintBooks(vector<Book>& bookinfo);
//Prints all books currently in database
void SortBooks(vector<Book>& bookinfo);
//Sorts all books currently in database by Author's name
void testMenu();
//Prints Menu Options

int main()
{
    vector<Book> bookinfo;
    int choice;

    do
    {
        testMenu();
        //Print out menu options
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            AddNewBook(bookinfo);
            break;
        case 2:
            PrintBooks(bookinfo);
            break;
        }
    } while (choice != 3);

    return 0;
}

void testMenu()
{
    cout << "****************************************************" << endl;
    cout << "*      Select from the following choices:          *" << endl;
    cout << "*                                                  *" << endl;
    cout << "*       1. Add a new book                          *" << endl;
    cout << "*                                                  *" << endl;
    cout << "*       2. Print listing sorted by author          *" << endl;
    cout << "*                                                  *" << endl;
    cout << "*       3. Quit                                    *" << endl;
    cout << "*                                                  *" << endl;
    cout << "*                                                  *" << endl;
    cout << "****************************************************" << endl;
}

void AddNewBook(vector<Book>& bookinfo)
{
    string newAuthor, newTitle, newDate;
    //get book info from user
    cout << "Enter authors name:" << endl;
    getline(cin, newAuthor);
    cout << "Enter book title:" << endl;
    getline(cin, newTitle);
    cout << "Enter book date:" << endl;
    getline(cin, newDate);
    //add book to vector
    Book a(newAuthor, newTitle, newDate);
    bookinfo.push_back(a);
}

void PrintBooks(vector<Book>& bookinfo)
{
    SortBooks(bookinfo);
    //sort books by author name
    cout << "The books entered so far, sorted by author:" << endl;
    //display to screen books in order of author's name
    for (unsigned int i = 0; i < bookinfo.size(); i++)
    {
        cout << " " << bookinfo[i].getAuthor() << ", " << bookinfo[i].getTitle() << ", " << bookinfo[i].getDate() << endl;
    }
}

void SortBooks(vector<Book>& bookinfo)
{
    sort(bookinfo.begin(), bookinfo.end());
}