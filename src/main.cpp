#include <iostream>
#include <vector>
#include "SportShoe.h"
#include "FemaleShoe.h"
#include "MaleShoe.h"
#include "Function.h"


using namespace std;

vector<Shoe *> kafsh; // global vector

int main(int argc, char const *argv[])
{

    cout << "-------WELCOME TO SHOE SHOP-------- \n";

    while (1)
    {
        cout << "               MENU                 \n";
        cout << "1 . Creat shoes                     \n";
        cout << "2 . Change                          \n";
        cout << "3 . Show                            \n";
        cout << "4 . History                         \n";
        cout << "5 . Delete                          \n\n";

        unsigned int id;
        string BC;      // body color
        string SHL;     // shoe lase color
        string SL;      // soles color
        unsigned int S; // size
        double HL;      // heel length

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            shoes(kafsh); // Creat shoes
            break;
        }

        case 2:
        {
            cout << "Please enter shoe ID that you want to change :";
            cin >> id;
            change(id, kafsh);
            break;
        }

        case 3:
        {
            cout << "Please enter shoe ID that you want to see :";
            cin >> id;
            show(id, kafsh);
            break;
        }

        case 4:
        {
            history(kafsh);
            break;
        }

        case 5:
        {
            cout << "Please enter shoe ID that you want to delete :";
            cin >> id;
            Delete(id, kafsh);
            break;
        }

        default:
        {
            cout << "wrong choice! try again\n";
            break;
        }
        }
    }

    return 0;
}
