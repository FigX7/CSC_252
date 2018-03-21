/*
 * source.cpp
 *
 *  Created on: Mar 7, 2018
 *      Author: Micha
 */

#include "MyPoint.h"
#include <iostream>
using std::cout;

int main (int argc,  char* argv[]){



	MyPoint Origin;
	MyPoint p1(10.0,30.5);

	cout << Origin.distance(p1);
	return 0;
}


