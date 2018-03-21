/*
 * MyPoint.h
 *
 *  Created on: Mar 7, 2018
 *      Author: Micha
 */

#ifndef MYPOINT_H_
#define MYPOINT_H_

class MyPoint {
	public:

//------------COnstructors -------------//
		MyPoint();
		MyPoint(const double& ,const double& );
		~MyPoint();
//----------- Getters --------------//
		double getX() const;
		double getY() const;
//----------Misc ----------------//
		double distance(const MyPoint& );


	private:
		double x;
		double y;


};

#endif /* MYPOINT_H_ */
