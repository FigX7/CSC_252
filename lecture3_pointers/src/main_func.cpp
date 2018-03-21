/*
 * main_func.cpp
 *
 *  Created on: Mar 12, 2018
 *      Author: Micha
 */


#include <iostream>
#include "Aqua.h"

int main(int argc, char* argv[]){


	// all in stack space
	int* pt = nullptr;
	int x = 7;
	int y = 8;
	int z = 6;

	pt = &x;
	pt = &y;
	pt = &z;

	int newValue = *pt;

	//heap allocation
	int* poi = new int;
	Aqua* poa = new Aqua(7,0.86);
	*poi = 1007;

	delete poi;
	poi = nullptr;

	delete poa;
	poa = nullptr;

	//allocate arrays of types arra of int

	int* pArrayInts = new int[100];

	for(int j = 0; j <100; j++){
		pArrayInts[j] = (j+1)*j;
	}


	return 0;
}
