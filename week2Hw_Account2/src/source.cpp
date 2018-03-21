/**
 * source.cpp
 * Purpose: Satisfy Week 2 HW Assignment 1( Pointers and Dynamic Memory – Chapter 11)
 *
 * @author Michael Figueroa
 * @version 1.1
 * @last Modified 3/17/18
 *
 **/
#include "Account.h"
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){

	string userId = "mfigueroa4";
	string password = "1234567";

	while(true){

		string passIn = "";
		string userIn = "";
		int option = 0;
		do{
			cout << "Please enter User Id: ";
			cin >> userIn;
			cout << "Please enter Password: ";
			cin >> passIn;

			if(userIn != userId || passIn != password){
				cout << "User Id  and Password combination invalid."
					 << "Please try again" << endl;
			}
		}while( userIn != userId || passIn != password );

		Account* accounts =  new Account[10];;

		for (int i = 0; i< 10;i++ ){

			(accounts+i)->creditTo(100.00);
		}

		while(option != 4){
			cout<<"(1) View the fifth accounts balance in the heap array you created."<<endl;
			cout<<"(2) Withdraw money from the fifth account in the array," << endl;
			cout<<"(3) Deposit money in the fifth account,"<<endl;
			cout<<"(4) Exit menu";
			cin >> option;
		   (accounts + 4)->executeMenu(option);
		}

		delete [] accounts;
		accounts = nullptr;

	}
	return 0;
}


