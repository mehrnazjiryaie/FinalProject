#ifndef MALESHOE_H
#define MALESHOE_H
#include <iostream>
#include <vector>
#include "Shoe.h"

class MaleShoe : public Shoe
{
private:
public:
    MaleShoe(unsigned int, std::string, std::string);
    ~MaleShoe();
    virtual void show_information() const override; // this function shows the information of the shoes
    void change();
};

void male_shoe(std::vector<Shoe *> &);

#endif