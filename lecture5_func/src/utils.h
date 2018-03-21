/*
 * header.h
 *
 *  Created on: Mar 17, 2018
 *      Author: Micha
 */

#ifndef UTILS_H_
#define UTILS_H_

/*
 * header.cpp
 *
 *  Created on: Mar 17, 2018
 *      Author: Micha
 */

#ifndef _CSC252_HEADER__
#define _CSC252_HEADER__





typedef struct{
	int type;
	double data;
} Descriptor ;


typedef enum{

	MON = 0x0,
	TUE = 0x10,
	WED = 0x20,
	THU = 0x30,
	FRI = 0x40,
	SAT = 0x50,
	SUN = 0x60

}DayOfWeek;

typedef double Salary;

double func2(const double& d);
double func1(const double& d);
double taxcalc(const double& s);

#endif /* _CSC252_HEADER___ */



#endif /* UTILS_H_ */
