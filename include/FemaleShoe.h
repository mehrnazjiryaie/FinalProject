#ifndef FEMALESHOE_H
#define FEMALESHOE_H
#include <iostream>
#include <vector>
#include "Shoe.h"

class FemaleShoe : public Shoe
{
private:
    double heelLength = 0; // length of heel

public:
    FemaleShoe(unsigned int, std::string, std::string); // constructor
    ~FemaleShoe();
    double get_heelLength() const; // getter
    void set_heelLength(double);   // setter
    virtual void show_information() const override; // this function shows the information of the shoes
    void change();
};

void female_shoe(std::vector<Shoe *> &);

#endif