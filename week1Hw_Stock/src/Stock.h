/*
 * Stock.h
 *
 *  Created on: Mar 7, 2018
 *      Author: Micha
 */

#ifndef STOCK_H_
#define STOCK_H_
#include <string>
using std::string;


class Stock {
	public:

		Stock();
		//FIXED: Extra argument constructor
		Stock(const string&,const string&);
		virtual ~Stock();
		void setPrevClosingPr(const double pp);
		void setCurrentPrice(const double cp);
		double getClosingPr();
		double getChangePercent();

	private:
		string m_name;
		string m_symbol;
		double m_prevClosingPrice;
		double m_currrentPrice;

};

#endif /* STOCK_H_ */
