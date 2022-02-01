#ifndef SPORTSHOE_H
#define SPORTSHOE_H
#include <iostream>
#include <vector>
#include "Shoe.h"

class SportShoe : public Shoe
{
private:
    std::string shoelaseColor = ""; // color of shoelace

public:
    SportShoe(unsigned int, std::string, std::string);
    ~SportShoe();
    std::string get_shoelaseColor() const;        // getter
    void set_shoelaseColor(std::string);    // setter
    virtual void show_information() const override;  
    void change();        // this function shows the information of the shoes
};

void sport_shoe(std::vector<Shoe *> &);

#endif