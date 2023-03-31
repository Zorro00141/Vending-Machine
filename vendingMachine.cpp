#include <iostream>
#include <windows.h>
#include "work.h"
using namespace std;

void verify(double moneyEntered)
{
    string yN;
    double moneyRemaining;

    int selection = vendMachine();

    switch (selection)
    {
        case 1:
        yN = checkDrink(selection);
        if(yN == "y")
            checkMoney(selection, moneyEntered);
        else
            verify(moneyEntered);
        break;

        case 2:
        yN = checkDrink(selection);
        if(yN == "y")
            checkMoney(selection, moneyEntered);
        else
            verify(moneyEntered);
        break;

        case 3:
        yN = checkDrink(selection);
        if(yN == "y")
            checkMoney(selection, moneyEntered);
        else
            verify(moneyEntered);
        break;

        case 4:
        yN = checkDrink(selection);
        if(yN == "y")
            checkMoney(selection, moneyEntered);
        else
            verify(moneyEntered);
        break;

        case 5:
        yN = checkDrink(selection);
        if(yN == "y")
            checkMoney(selection, moneyEntered);
        else
            verify(moneyEntered);
        break;

        case 6:
        yN = checkDrink(selection);
        if(yN == "y")
            checkMoney(selection, moneyEntered);
        else
            verify(moneyEntered);
        break;
    }
}

int main()
{
    while(1!=0)
    {
        system("CLS");
        verify(insertCoins());
        system("pause");
    }
}