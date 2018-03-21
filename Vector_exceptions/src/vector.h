#pragma once
#include "CSC252Exception.h"

template< typename T >
class vector
{
public:
	vector();
	vector(unsigned);
	//vector(unsigned, T);
	//~vector();

	void push_back(T);
	//void pop_back();
	unsigned size() const;
	T at(unsigned) const;
	//bool empty() const;
	void clear();
	//void swap( vector<T>& );

private:
	unsigned m_size = 0;
	unsigned pos = 0;
	T* m_data = nullptr;
};


template< typename T >
vector<T>::vector()
{
	// fill me out
}


template< typename T >
vector<T>::vector(unsigned sz)
{
	m_size = sz;
	m_data = new T[sz];
}

template< typename T >
void vector<T>::push_back( T elem )
{
	if ( m_data != nullptr && 
		pos != m_size && pos < m_size)
	{
		m_data[ pos ] = elem;
		pos++;
	}
	else
	{
		// send out an APB for the out of bounds villian
	}
}

template< typename T >
unsigned vector<T>::size() const
{
	return pos;
}

template< typename T >
void vector<T>::clear()
{
	m_size = 0;
	m_pos = 0;
	if (m_data != nullptr)
	{
		delete[] m_data;
		m_data = nullptr;
	}
}

template< typename T >
T vector<T>::at(unsigned pos) const
{
	if (m_data != nullptr &&
		pos != m_size && pos < m_size)
	{
		return m_data[pos];
	}
	else
	{
		string s;
		if (pos > m_size)
		{
			s = " vector<T>::at - position out of range ";
		}
		else if (m_data == nullptr)
		{
			s = " vector<T>::at - null data ptr ";
		}
		else
			s = " error in vector<T>::at ";

		throw CSC252Exception(s);
	}

}
