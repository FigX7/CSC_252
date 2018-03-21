/*
 * Employee.cpp
 *
 *  Created on: Mar 12, 2018
 *      Author: Micha
 */

#include "Employee.h"
#include <string>

using std::string;

unsigned Employee::numEmployees = 0;

Employee::Employee() {
	// TODO Auto-generated constructor stub

}


Employee::Employee(string f,string l){
this->fname = f;
this->lname =l;

}


Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

