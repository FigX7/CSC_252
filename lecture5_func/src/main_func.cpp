/*
 * main_func.cpp
 *
 *  Created on: Mar 17, 2018
 *      Author: Micha
 */



#include <iostream>
#include "Object.h"
#include "utils.h"

int main (int argc, char* argv[]){

	Descriptor d1;
	d1.type = 1;
	d1.data = 7.86;

	Descriptor* d2 = new Descriptor;
	d2->type = 2;
	d2->data = 7.86;

	Object obj1;
	obj1.setType(1);
	obj1.setData(7.86);

	Object* obj2 = new Object;
	obj2-> setType(2);
	obj2-> setData(0.786);

	return 0;
}
