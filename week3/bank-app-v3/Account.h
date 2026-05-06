#pragma once
#include <iostream>
#include <string>

class Account
{
private:
	// member vars
	int id;
	std::string name;
	float balance;
	float depositAmount;
	float withdrawAmount;

public:
	Account() { // constructor
		id = 0; // program should automatically set (id ++1)
		name = "";
		balance = 0.0f;
		depositAmount = 0.0f;
		withdrawAmount = 0.0f;
	}

	void getUserInfo()
	{
		std::cout << "Enter your name: " << "\n";
		std::getline(std::cin, name);
		std::cout << "Enter the balance: " << "\n";
		std::cin >> balance;

		std::cout << "Account ID: " << id << ", Name: " << name << ", Balance: $" << balance << "\n";
	}

	void dispAccount() const {
		std::cout << "Account ID: " << id
			<< " Name: " << name
			<< " Balance: $" << balance << "\n";
	}

	void deposit() {
		std::cout << "Amount to deposit: ";
		std::cin >> depositAmount;
		balance = balance + depositAmount;
		std::cout << "Your balance is now: $" << balance << "\n\n";
	}

	void withdraw() {
		std::cout << "Amount to withdraw: ";
		std::cin >> withdrawAmount;
		balance = balance - withdrawAmount;
		std::cout << "Your balance is now: $" << balance << "\n\n";
	}
};
