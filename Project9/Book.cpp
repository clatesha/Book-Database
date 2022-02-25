//IMPLAMENTATION file Book.cpp
//This is the implementation of the class Book
//The interface for the class Set is in the header file Book.h

//Cheron Fletcher
//July 24, 2020

#include <string>
#include <algorithm>
#include "Book.h"
using namespace std;

namespace BookDatabase
{

    Book::Book() : author(""), title(""), date("") {}
    //set author, title and date to empty strings

    Book::Book(string new_author, string new_title, string new_date) : author(new_author), title(new_title), date(new_date) {}
    //set author, title and date to give data

    void Book::setData(string new_author, string new_title, string new_date)
    {
        author = new_author;
        title = new_title;
        date = new_date;
    }
    //set author, title and date to give data

    string Book::getAuthor() const
    {
        return author;
    }

    string Book::getTitle() const
    {
        return title;
    }

    string Book::getDate() const
    {
        return date;
    }

} // namespace BookDatabase
