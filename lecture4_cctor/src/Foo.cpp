/*
 * Foo.cpp
 *
 *  Created on: Mar 14, 2018
 *      Author: Micha
 */

#include "Foo.h"

Foo::Foo() {
	// TODO Auto-generated constructor stub

}


Foo::Foo(int s){
	if(s > 0){
		p_data = new int [s];
	}
}

Foo::Foo(const Foo& that){
	this->m_size = that.m_size;
	//Deep Copy
	this->p_data = new int[that.m_size];
	for(int i = 0; i < that.m_size;i++){
		this->p_data[i] = that.p_data[i];
	}
}

Foo::~Foo() {
	if (p_data != nullptr){
		delete[] p_data;
		p_data = nullptr;
	}
}

