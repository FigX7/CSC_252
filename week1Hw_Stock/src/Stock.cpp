/*
 * Stock.cpp
 *
 *  Created on: Mar 7, 2018
 *      Author: Micha
 */

#include "Stock.h"
Stock::Stock(){};

//FIXED: Extra argument constructor
Stock::Stock(const string& name, const string& sy) {

	this->m_name = name;
	this->m_symbol = sy;

}



Stock::~Stock() {

}
//----------------- Setters----------//
void Stock::setPrevClosingPr(const double pp){
m_prevClosingPrice = pp;
}

void Stock::setCurrentPrice(const double cp){
this->m_currrentPrice = cp;
}



//-------------Getters------------//
double  Stock::getClosingPr(){
	return m_prevClosingPrice;
}

//-----------------Misc -------------- //

double Stock::getChangePercent(){
	return ((this->m_currrentPrice - this ->m_prevClosingPrice)/this->m_prevClosingPrice) * 100;
}
