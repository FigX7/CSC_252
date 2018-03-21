/*
 * Account.cpp
 *
 *  Created on: Mar 7, 2018
 *      Author: Micha
 */

#include "Account.h"
#include <iostream>
#include <string>
#include <stdio.h>
//---- COnstructors ------------
Account::Account() {
	this->firstName = "John";
	this->lastName = "Doe";
	this->currentBalance = 0.0;
}

Account::Account(const string& pFname, const string& pLname){
	this->firstName = pFname;
	this->lastName = pLname;
	this->currentBalance = 0.0;
}

Account::~Account() {

}

//-----------------Mutators ----------------//
double Account::debitFrom(const double& df){
	this->currentBalance -= df;
	return this->currentBalance;
}

double Account::creditTo(const double& ct){
	this->currentBalance += ct;
	return this->currentBalance;
}

//----------------- MISC---------------//
void Account::printAccount(){
	using std::string;
	printf("%s %s \t\t %.2f\n",this->firstName.c_str(),this->lastName.c_str(),this->currentBalance);

}
void Account::executeMenu(int& choice){
	using std::cin;
	double amount = 0.0;
	switch (choice){

		case 1:{
			this->printAccount();
			break;
		}

		case 2:{
			cout<< "PLease Enter amount to withdraw: ";
			cin >> amount;
			this->debitFrom(amount);
			break;
		}

		case 3:{
			cout<< "PLease Enter amount to deposit: ";
			cin >> amount;
			this->creditTo(amount);
			break;

		}
		case 4:{
			break;
		}
		default:{
			cout << "You entered an invalid option." << endl;
		}
	}
}

