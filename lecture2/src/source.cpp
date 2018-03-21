/*
 * source.cpp
 *
 *  Created on: Mar 7, 2018
 *      Author: Micha
 */
#include <iostream>
using namespace std;

#include "Stock.h"

int main(int argc, char*argv[]){

	Stock ibm("IBM","IBM");
	Stock goog ("Google","GOOGL");

	ibm.setPreviousClosing(200.00);
	ibm.setCurrentPrice(158.00);
	ibm.experiment = 7.0;


	return 0;
}



