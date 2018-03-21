/*
 * main_func.cpp
 *
 *  Created on: Mar 14, 2018
 *      Author: Micha
 */

#include "Foo.h"
#include <iostream>

int main( int agrc, char* argv[] ){

	Foo f1(5);
	Foo f2(f1);

	return 0;
}


