#include <iostream>
#include <vector>
#include "FemaleShoe.h"
using namespace std;

FemaleShoe::FemaleShoe(unsigned int sz, string bodyCOL, string solesCOL) : Shoe(sz, bodyCOL, solesCOL) // constructor Implementation
{
    cout << "What is your heel length ? \n";
    cin >> heelLength;
    if (heelLength > 12)
    {
        int a;
        throw a;
    }
    set_heelLength(heelLength);
    set_ID(rand() % 100 + 200); // this function generate random numbers for each pair of shoes
    cout << "Your shoes's ID is :";
    cout << get_ID() << endl
         << endl;
    cout << "Congratulation! Your Shoes is created successfully!!!\n\n";
}

FemaleShoe::~FemaleShoe() // destructor
{
}

void FemaleShoe::show_information() const
{
    
    Shoe::show_information();
    cout << "heel length of shoe : " << this->get_heelLength() << endl;
}

void FemaleShoe::change() 
{
    string BC;
    string SL;
    unsigned int S;
    double HL;
    cout << "what do you want to change?\n";

    cout << "size --> 1\n";
    cout << "body color --> 2\n";
    cout << "soles or heel color --> 3\n";
    cout << "heel length --> 4\n";

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
        cout << "Enter new heel length : ";
        cin >> HL;
        this->set_heelLength(HL);
        break;

    default:
        cerr << "WRONG CHOICE! TRY AGAIN!\n";
        break;
    }

    cout << "Congrats!! Your shoe changed successfully!\n";
}



double FemaleShoe::get_heelLength() const // getter
{
    return heelLength;
}


void FemaleShoe::set_heelLength(double heellength)
{
    heelLength = heellength;
}



void female_shoe(vector<Shoe *> &female) // this function get members of object and make the object
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

    female.push_back(new FemaleShoe(size, bodyColor, solesColor));
}
