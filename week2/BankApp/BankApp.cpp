// BankApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

///////////////////////////
//
// William Torman
//
// CSE 220C
//
// W02
//
///////////////////////////

#include <iostream>
#include <string>
#include "Account.cpp"

int main()
{
    // loop conditions
    int option = 5;

    Account myAccount;
    myAccount.getUserInfo();

    while (option != 0) {
        // display menu option
        std::cout << "\n\n" << "Account Menu : " << "\n";
        std::cout << "0. Quit Program" << "\n";
        std::cout << "1. Display Account Information" << "\n";
        std::cout << "2. Add a deposit to an account" << "\n";
        std::cout << "3. Withdraw from an account" << "\n";
        std::cout << "\n" << "Your choice: ";
        std::cin >> option;

        if (option == 1) {
            myAccount.dispAccount();
        }
        else if (option == 2) {
            myAccount.deposit();
        }
        else if (option == 3) {
            myAccount.withdraw();
        }
    }

    return 0;
}
