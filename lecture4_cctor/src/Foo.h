/*
 * Foo.h
 *
 *  Created on: Mar 14, 2018
 *      Author: Micha
 */

#ifndef FOO_H_
#define FOO_H_

class Foo {
public:
	Foo();
	Foo(int);
	Foo(const Foo&);
	~Foo();

private:
	int m_size = 0;
	int* p_data = nullptr;
};

#endif /* FOO_H_ */
