#include "SportShoe.h"
#include <iostream>
#include <vector>
using namespace std;

SportShoe::SportShoe(unsigned int sz, string bodyCOL, string solesCOL) : Shoe(sz, bodyCOL, solesCOL)
//: size(sz), shoelaseColor(shoeLCOL), bodyColor(bodyCOL), solesColor(solesCOL)
{
    cout << "What color do you want for shoelase ? \n";
    cin >> shoelaseColor;
    set_shoelaseColor(shoelaseColor);
    set_ID(rand() % 100 + 100);
    cout << "Your shoes's ID is ";
    cout << get_ID() << endl
         << endl;
    cout << "Congratulation! Your Shoes is created successfully!!!\n\n";
}

SportShoe::~SportShoe()
{
}

void SportShoe::show_information() const
{
    Shoe::show_information();
    cout << "shoelase color of shoe : " << this->get_shoelaseColor() << endl;
}

void SportShoe::change() 
{
    string BC;
    string SHL;
    string SL;
    unsigned int S;

    cout << "what do you want to change?\n";

    cout << "size --> 1\n";
    cout << "body color --> 2\n";
    cout << "soles or heel color --> 3\n";
    cout << "shoelase color --> 4\n";

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

    case 4:
        cout << "Enter new sholase color : ";
        cin >> SHL;
        this->set_shoelaseColor(SHL);
        break;

    default:
        cerr << "WRONG CHOICE! TRY AGAIN!\n";
        break;
    }

    cout << "Congrats!! Your shoe changed successfully!\n";
}



string SportShoe::get_shoelaseColor() const
{
    return shoelaseColor;
}



void SportShoe::set_shoelaseColor(string sholasecolor)
{
    shoelaseColor = sholasecolor;
}



void sport_shoe(vector<Shoe *> &sport) // this function get members of object and make the object
{
    unsigned int size;
    string shoelaseColor;
    string bodyColor;
    string solesColor;

    cout << "What is your foot size?\n";
    cin >> size;

    cout << "What color do you want for shoebody?\n";
    cin.ignore();            // ignores garbage character
    getline(cin, bodyColor); // get the string

    cout << "What color do you want for shoe soles / heel?\n";
    getline(cin, solesColor); // get the string

    
    sport.push_back(new SportShoe(size, bodyColor, solesColor));
}
