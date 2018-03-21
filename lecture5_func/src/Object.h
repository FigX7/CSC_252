/*
 * Object.h
 *
 *  Created on: Mar 17, 2018
 *      Author: Micha
 */

#ifndef OBJECT_H_
#define OBJECT_H_

class Object{
	public:

		void setData(const double& );
		int getData();

		void setType(const int& );
		int getType();
	private:
		int bad_type;
		double bad_data;

};



#endif /* OBJECT_H_ */
