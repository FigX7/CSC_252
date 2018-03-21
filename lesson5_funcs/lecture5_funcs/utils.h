#ifndef _CSC252_HEADER_
#define _CSC252_HEADER_

typedef struct 
{
	int type;
	double data;

} Descriptor ;

typedef enum
{
	MON = 0x0,
	TUE = 0x10,
	WED = 0x20,
	THU = 0x30,
	FRI = 0x40,
	SAT = 0x50,
	SUN = 0x60

} DayOfWeek;

typedef double Salary;
typedef double Money;

double func1(const double& d);
double func2(const double& d);
double taxCalc(const double& s);

#endif // _CSC252_HEADER_