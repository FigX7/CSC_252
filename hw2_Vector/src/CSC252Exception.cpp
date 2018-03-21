#include "CSC252Exception.h"



CSC252Exception::CSC252Exception(string s)
{
	msg = s;
}


CSC252Exception::~CSC252Exception()
{
}


const string
CSC252Exception::reason()
{
	return msg;
}
