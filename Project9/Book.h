#pragma once

//INTERFACE/header file
//Header file Book.h
//This is the Interface for the class Book


//Cheron Fletcher
//July 24, 2020

#ifndef BOOK_H
#define BOOK_H

#include <algorithm>
#include <string>
using namespace std;

namespace BookDatabase
{
    class Book
    {
    public:
        Book();
        //set author, title and date to empty strings
        Book(string new_author, string new_title, string new_date);
        //set author, title and date to give data
        void setData(string new_author, string new_title, string new_date);
        //set author, title and date to give data
        string getAuthor() const;
        //returns book author
        string getTitle() const;
        //returns book title
        string getDate() const;
        //returns book date
        friend bool operator<(const Book& book1, const Book& book2);
        //compares two objects of type Book so that the author field 
        //from the two books are compared
        friend bool operator<(const Book& book1, const Book& book2)
        {
            return (book1.author < book2.author);
        }

    private:
        string author, title, date;
    };

} // namespace BookDatabase

#endif