#include <iostream>
#include <vector>
#include "MaleShoe.h"
using namespace std;

MaleShoe::MaleShoe(unsigned int sz, string bodyCOL, string solesCOL) : Shoe(sz, bodyCOL, solesCOL)
//: size(sz), bodyColor(bodyCOL), solesColor(solesCOL)
{
    set_ID(rand() % 100 + 300); // this function generate random numbers for each pair of shoes
    cout << "Your shoes's ID is :";
    cout << get_ID() << endl
         << endl;
    cout << "Congratulation! Your Shoes is created successfully!!!\n\n";
}

MaleShoe::~MaleShoe()
{
}

void MaleShoe::show_information() const
{
    Shoe::show_information();
}

void MaleShoe::change() 
{
    string BC;
    string SL;
    unsigned int S;
    cout << "what do you want to change?\n";

    cout << "size --> 1\n";
    cout << "body color --> 2\n";
    cout << "soles or heel color --> 3\n";

    int choice;
    cout << "Enter your choice :\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter new size : ";
        cin >> S;
        this->set_size(S);
        break;

    case 2:
        cout << "Enter new body color : ";
        cin.ignore();
        getline(cin, BC);
        this->set_bodyColor(BC);
        break;

    case 3:
        cout << "Enter new soles color : ";
        cin >> SL;
        this->set_solesColor(SL);
        break;

    default:
        cerr << "WRONG CHOICE! TRY AGAIN!\n";
        break;
    }

    cout << "Congrats!! Your shoe changed successfully!\n";
}



void male_shoe(vector<Shoe *> &male) // this function get members of object and make the object
{
    unsigned int size;
    string bodyColor;
    string solesColor;

    cout << "What is your foot size?\n";
    cin >> size;

    cout << "What color do you want for shoe body?\n";
    cin.ignore();            // ignores garbage character
    getline(cin, bodyColor); // get the string

    cout << "What color do you want for shoe soles / heel?\n";
    getline(cin, solesColor); // get the string

    // MaleShoe mshoe(size, bodyColor, solesColor); // call constructor
    male.push_back(new MaleShoe(size, bodyColor, solesColor));
}
