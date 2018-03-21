/*
 * Object.cpp
 *
 *  Created on: Mar 17, 2018
 *      Author: Micha
 */
#include "Object.h"

void Object::Object setData(const double& refData){
	this->bad_data = refData;
}
double Object::Object getData(){
	return this->bad_data;
}

void Object::Object setType(const int& refType){
	this->bad_type = refType;

}
int doubleObject::Object getType(){
	return this->type;
}

