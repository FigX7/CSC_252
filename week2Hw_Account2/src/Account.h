/*
 * Account.h
 *
 *  Created on: Mar 7, 2018
 *      Author: Micha
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <iostream>
#include <iomanip>

using std::string;
using std::cout;
using std::endl;
class Account {
	public:
		Account();
		Account(const string&,const string&);

		bool getLogInfo();
		virtual ~Account();

		double debitFrom(const double& df);
		double creditTo(const double& ct);
		double getBalance() const;
		void executeMenu(int&);

//-------   Misc Memeber functions answer to (6) ----//
		void printAccount();


	private:
		string firstName;
		string lastName;
		double currentBalance;
};

#endif /* ACCOUNT_H_ */
