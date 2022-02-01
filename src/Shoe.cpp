#include <iostream>
#include <vector>
#include <typeinfo>
#include "Shoe.h"
using namespace std;

Shoe::Shoe(unsigned int sz, string bodyCOL, string solesCOL)
    : size(sz), bodyColor(bodyCOL), solesColor(solesCOL)
{
}

Shoe::~Shoe()
{
}

unsigned int Shoe::get_size() const
{
    return size;
}

string Shoe::get_bodyColor() const
{
    return bodyColor;
}

string Shoe::get_solesColor() const
{
    return solesColor;
}

bool Shoe::find_ID(unsigned int id) // finds special a pair of shoes using by ID
{
    if (id == ID)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Shoe::set_bodyColor(string bodycolor)
{
    bodyColor = bodycolor;
}

void Shoe::set_solesColor(string solescolor)
{
    solesColor = solescolor;
}

void Shoe::set_size(unsigned int sz)
{
    size = sz;
}

void Shoe::set_ID(unsigned int id)
{
    ID = id;
}

unsigned int Shoe::get_ID() const
{
    return ID;
}

void Shoe::show_information() const
{
    cout << "Type of shoe : " << typeid(*this).name() << endl;
    cout << "size of shoe : " << this->get_size() << endl;
    cout << "body color of shoe : " << this->get_bodyColor() << endl;
    cout << "soles color of shoe : " << this->get_solesColor() << endl;
    cout << "ID of shoe : " << this->get_ID() << endl;
}

