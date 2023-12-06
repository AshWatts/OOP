//============================================================================
// Name        : Assignment3.cpp
// Author      : Ayush W
// Version     :
// Copyright   : x
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Publication
{
protected:
    string title;
    float price;

public:
    Publication() : title(""), price(0.0) {}

    void getData()
    {
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Price: ";
        cin >> price;
    }

    void displayData()
    {
        cout << "Title: " << title << endl;
        cout << "Price: ₹" << price << endl;
    }
};

class Book : public Publication
{
private:
    int pageCount;

public:
    Book() : pageCount(0) {}

    void getData()
    {
        Publication::getData();  // Call base class method to get title and price
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void displayData()
    {
        Publication::displayData();  // Call base class method to display title and price
        cout << "Page Count: " << pageCount << " pages" << endl;
    }
};

class Tape : public Publication
{
private:
    float playingTime;

public:
    Tape() : playingTime(0.0) {}

    void getData()
    {
        Publication::getData();  // Call base class method to get title and price
        cout << "Enter playing time (minutes): ";
        cin >> playingTime;
    }

    void displayData()
    {
        Publication::displayData();  // Call base class method to display title and price
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

int main()
{
    try
    {
        Book book;
        Tape tape;

        cout << "Enter data for the book publication:" << endl;
        book.getData();

        cout << "\nEnter data for the audio tape publication:" << endl;
        tape.getData();

        cout << "\nDisplaying Book Publication Data:" << endl;
        book.displayData();

        cout << "\nDisplaying Audio Tape Publication Data:" << endl;
        tape.displayData();
    }
    catch (...)
    {
        // Catch any exception and set all data members to zero values
        cout << "An exception occurred. Setting all data members to zero values." << std::endl;
    }

    return 0;
}
