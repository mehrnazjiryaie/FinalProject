#include "SportShoe.h"
#include "Function.h"
#include "FemaleShoe.h"
#include "MaleShoe.h"
#include <vector>
#include <iostream>
#include <exception>
using namespace std;

void shoes(vector<Shoe *> &kafsh)
// this function creat shoes
{
    cout << "Which kind of shoe do you want?\n";
    cout << " ------------------------\n";
    cout << "| 1 --> Sport Shoe       |\n";
    cout << "| 2 --> Female Shoe      |\n";
    cout << "| 3 --> Male Shoe        |\n";
    cout << " ------------------------\n\n";

    int num;

    cin >> num;

    switch (num)
    {
    case 1:
        sport_shoe(kafsh);
        break;

    case 2:
    try
    {
        female_shoe(kafsh);
        break;
    }
    catch(int e)
    {
        cout << "You can`t wear these shoes with this heel length, it`s too high!!!!\n";
    }

    case 3:
        male_shoe(kafsh);
        break;

    default:
        cout << "There is not this type of shoe!!!\n";
        break;
    }
}

void history(vector<Shoe *> &kafsh)
// this function show information of all of shoes you have been creat
{
    if (kafsh.size() == 0)
    {
        cout << "You didn`t create any shoes\n";
    }
    else if (kafsh.size() > 0)
    {
        cout << "Here is your shoes :\n";
        for (size_t i = 0; i < kafsh.size(); i++)
        {
            kafsh[i]->show_information();
        }
    }
}

void change(unsigned int id, vector<Shoe *> &kafsh)
// this function change information of shoes that you want
{
    for (size_t i = 0; i < kafsh.size(); i++)
    {
        if (kafsh[i]->find_ID(id))
        {
            kafsh[i]->change();
        }
    }
}

void show(unsigned int id, vector<Shoe *> &kafsh)
// this function show information of a pair of shoes that you want
{
    for (size_t i = 0; i < kafsh.size(); i++)
    {
        if (kafsh[i]->find_ID(id))
        {
            kafsh[i]->show_information();
        }
    }
}

void Delete(unsigned int id, vector<Shoe *> &kafsh)
// this function delete a pair of shoes that you want
{
    for (size_t i = 0; i < kafsh.size(); i++)
    {
        if (kafsh[i]->find_ID(id))
        {
            kafsh[i]->~Shoe();
        }
    }
}