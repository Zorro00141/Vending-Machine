#include <iostream>
#include <windows.h>
using namespace std;

namespace prices
{
    double prices[6] {2.5, 2.5, 1.75, 3, 3.45, 0.99};
    string names[6] {"Coke","Sprite", "Ice Tea", "Root Beer", "Dr P", "Juice"};

}

int vendMachine()
{
    int selection;
    string error = "Not a valid selection please re-enter your selection";

    cout << "Items in Vending Machine" <<std::endl;
    cout << "1 Coke $" <<prices::prices[0]<<std::endl;
    cout << "2 Sprite $" <<prices::prices[1] <<std::endl;
    cout << "3 Ice Tea $" <<prices::prices[2] <<std::endl;
    cout << "4 Root Beer $" <<prices::prices[3] <<std::endl;
    cout << "5 Dr P$" <<prices::prices[4] <<std::endl;
    cout << "6 Juice $" <<prices::prices[5] <<std::endl;

    cout << "Enter your selection number" <<std::endl;

    if(cin >> selection)
        cout <<std::endl;
    else
    {
        cout <<error<<std::endl;
        cin.clear();
        while (cin.get() != '\n') ;
        vendMachine();
    }

    if(selection!=1 || selection!=2 ||selection!=3 ||selection!=4 ||selection!=5 ||selection!=6)
        {
            cout <<error<<std::endl;
            vendMachine();
        }

    return selection;
}

double insertCoins()
{
    double money;
    string error = "Not a valid amount of money please re-enter your money";

    cout<<"Insert your money"<<std::endl;
    if(cin>>money)
    {
        if(money <= 0)
        {
            cout <<error<<std::endl;
            insertCoins();
        }
        else
            cout<<std::endl;
    }
    else
    {
        cout <<error<<std::endl;
        cin.clear();
        while (cin.get() != '\n') ;
        insertCoins();
    }

    return money;
}

string checkDrink(int selection)
{
    string yN;

    cout<<"You picked "<<prices::names[selection-1] <<std::endl;
    cout<<"Is this correct? y/n" <<std::endl;

    cin >> yN;
    cout <<std::endl;

    return yN;
}

void checkMoney(int selection, double moneyEntered)
{
    double moneyRemaining;

    if(prices::prices[selection-1] < moneyEntered)
    {
        cout<<"Here is your coke"<<std::endl;
        moneyRemaining = moneyEntered - prices::prices[selection-1];
        cout<<"You have $" <<moneyRemaining<< " left"<<std::endl;
    }
    else
    cout<<"You dont have enough money"<<std::endl;
}
