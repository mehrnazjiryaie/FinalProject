#ifndef SHOE_H
#define SHOE_H

#include <iostream>

using namespace std;

class Shoe
{
private:
    unsigned int size = 0;       // size of shoe
    std::string bodyColor = "";  // color of shoe body
    std::string solesColor = ""; // color of heel and soles - zireh ya pashneh kafsh
    unsigned int ID = 0;         // an id for each shoe

protected:
    void set_ID(unsigned int);
    unsigned int get_ID() const;

public:
    Shoe(unsigned int, std::string, std::string);
    virtual ~Shoe();
    unsigned int get_size() const;         // getter
    std::string get_bodyColor() const;     // getter
    std::string get_solesColor() const;    // getter
    bool find_ID(unsigned int);            // function that searches the wanted ID
    void set_bodyColor(std::string);       // setter
    void set_solesColor(std::string);      // setter
    void set_size(unsigned int);           // setter
    virtual void show_information() const = 0; // this function shows the information of the shoes
    virtual void change() = 0;
    
    
};

#endif