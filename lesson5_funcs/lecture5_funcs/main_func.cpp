#include<iostream>
#include "utils.h"
#include "Object.h"


int main(int argc, char* argv[])
{

	Descriptor d1;
	d1.type = 1;
	d1.data = 7.86;

	Descriptor* d2 = new Descriptor;
	d2->type = 2;
	d2->data = 786.00;

	Object obj1;
	obj1.setType(1);
	obj1.setData(78.6);

	Object* obj2 = new Object;
	obj2->setType(2);
	obj2->setData(0.786);

	DayOfWeek day1 = MON;
	Salary mysal = 1000000.00;

	double d = 6789.6789;
	double result1 = func1(d);
	double result2 = func2(2);

	Money ouch = taxCalc(mysal);
	Money takehome = mysal - ouch;

	return 0;
}