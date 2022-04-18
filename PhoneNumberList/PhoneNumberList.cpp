// PhoneNumberList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

string* getData(ifstream& file);
void nameSearch(string* data, string name);

int main()
{
    string name;
    ifstream phoneBook("phonebook");

    cout << "Enter a name or partial name to search for: ";
    cin >> name;
    cout << endl;

    nameSearch(getData(phoneBook), name);
}

//get data from file
string* getData(ifstream& file)
{
    string data[50];
    string element;
    int counter = 0;

    //read file into data
    while (file >> element)
    {
        data[counter] = element;
        counter++;
    }

    return data;
}

//search for name from user input
void nameSearch(string* data, string name)
{
    int counter = 0;

    cout << "Here are the results of the search: ";

    for (int i = 0; i < 50; i++)
    {
        if (data[counter] == name)
        {
            cout << data[counter] << endl;
        }
        counter++;
    }
}