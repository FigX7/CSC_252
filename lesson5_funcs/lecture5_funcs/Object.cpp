#include "Object.h"

void 
Object::setData(const double& d)
{
	this->data = d;
}

double 
Object::getData()
{
	return this->data;
}

void 
Object::setType( const int& i)
{
	this->type = i;
}

int 
Object::getType()
{
	return this->type;
}