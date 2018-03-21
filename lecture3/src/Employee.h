/*
 * Employee.h
 *
 *  Created on: Mar 12, 2018
 *      Author: Micha
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>

using std::string;



class Employee {
public:
	Employee();
	Employee(string,string);
	virtual ~Employee();



private:
	string fname = "";
	string lname  = "";
	static unsigned numEmployees;
};

#endif /* EMPLOYEE_H_ */
