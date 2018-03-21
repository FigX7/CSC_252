/*
 * MyPoint.cpp
 *
 *  Created on: Mar 7, 2018
 *      Author: Micha
 */

#include "MyPoint.h"
#include <iostream>
#include <math.h>

//------------COnstructors -------------//
MyPoint::MyPoint() {
 this->x = 0.0;
 this->y = 0.0;

}
MyPoint::MyPoint(const double& px,const double& py){
this->x = px;
this->y = py;

}
MyPoint::~MyPoint() {

}

//----------- Getters --------------//
	double MyPoint::getX() const{
		 return x;
	 }
	 double MyPoint::getY() const{
		 return y;
	 }
	 double MyPoint:: distance(const MyPoint& p2){
		 double dist = 0.0;

		 dist = sqrt(pow(p2.getX() - this->getX(),2.0) + pow(p2.getY()- this->getY(),2.0));

		 return dist;
	 }
