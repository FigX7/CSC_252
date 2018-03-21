/*
 * mainFucn.cpp
 *
 *  Created on: Mar 7, 2018
 *      Author: Micha
 */

#include"Stock.h"
#include<iostream>

using std::cout;
using std::endl;


int main(int argc, char* argv[]){

	//FIXED: Extra argument constructor
	Stock msft("MSFT","Mirosoft Corp.");

	msft.setPrevClosingPr(27.5);
	msft.setCurrentPrice(27.6);
	cout << msft.getChangePercent() << "% change";


	return 0;
}


