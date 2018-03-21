/*
 * stock.h
 *
 *  Created on: Mar 7, 2018
 *      Author: Micha
 */

#ifndef STOCK_H_
#define STOCK_H_

#include <string>
using std::string;

class Stock{
	public:
		Stock(string n,string sy);
		string getSy()const;
		string getn() const;
		string getPCP()const;
		double experiment;

		void setPreviousClosing(const double pc );
		void setCurrentPrice(const double cp);
		void setSy(string sy);



	private:
		string symbol;
		string name;
		double perCLosingPrince;
		double currentPrice;


};





#endif /* STOCK_H_ */
