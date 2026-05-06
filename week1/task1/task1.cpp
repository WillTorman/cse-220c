// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

///////////////////////////
//
// William Torman
//
// CSE 220C
//
// W01: Task 1
//
///////////////////////////

#include <iostream>
#include <string>

void getUserInfo(std::string& name, float& balance) //remember "&" makes the parameters pass by reference rather than by value
{
    std::cout << "Enter your name: " << "\n";
    std::getline(std::cin, name);
    std::cout << "Enter the balance: " << "\n";
    std::cin >> balance;
}

int main()
{
    // user info vars
    int id = 0;
    std::string name;
    float balance = 0.0f;
    float deposit = 0.0f;
    float withdraw = 0.0f;

    // loop conditions
    int option = 5;

    getUserInfo(name, balance);

    while (option != 0) {
        // display menu option
        std::cout << "\n" << "Account Menu : " << "\n";
        std::cout << "0. Quit Program" << "\n";
        std::cout << "1. Display Account Information" << "\n";
        std::cout << "2. Add a deposit to an account" << "\n";
        std::cout << "3. Withdraw from an account" << "\n";
        std::cout << "\n" << "Your choice: ";
        std::cin >> option;

        if (option == 1) {
            std::cout << "Account ID: " << id << ", Name: " << name << ", Balance: " << balance << "\n\n";
        }
        else if (option == 2) {
            std::cout << "Amount to deposit: ";
            std::cin >> deposit;
            balance = balance + deposit;
            std::cout << "Your balance is now: " << balance << "\n\n";
        }
        else if (option == 3) {
            std::cout << "Amount to withdraw: ";
            std::cin >> withdraw;
            balance = balance - withdraw;
            std::cout << "Your balance is now: " << balance << "\n\n";
        }
    }

    //std::cout << "Name: " << name << "\n";
    //std::cout << "Balance: " << balance << "\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
