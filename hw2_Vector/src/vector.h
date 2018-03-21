#pragma once
#include <iostream>
using std::cout;
using std::endl;

template< typename T >
class vector
{
public:
	vector();
	vector(unsigned);
	vector(unsigned, T);
	~vector();

	void push_back(const T&);
	void pop_back();
	unsigned size() const;
	T at(int) const;
	bool empty() const;
	void clear();
	void swap( vector<T>& );
	void print();

private:
	unsigned m_size = 0;
	unsigned pos = 0;
	T* m_data = nullptr;
};


template< typename T >
vector<T>::vector()
{
	this->m_size = 0;
	this->pos = 0;
	this->m_data = nullptr;
}


template< typename T >
vector<T>::vector(unsigned sz)
{
	this->m_size = sz;
	this->m_data = new T[sz];
}

template< typename T >
vector<T>::vector(unsigned sz2, T defaultValue)
{
	this->m_size = sz2;
	m_data = new T[sz2];

	for(int i = 0; i < sz2; i++){
		this->push_back(defaultValue);
	}
}


template< typename T >
void vector<T>::push_back(const T& elem )
{
	if ( m_data != nullptr && 
		pos != m_size && pos < m_size)
	{
		m_data[ pos ] = elem;
		pos++;
	}
	else if(  m_data == nullptr ){
		cout << "m_data is a Null Pointer.";

	}else if( pos > m_size){
		cout << "Postion out of bounds.";

	}
}

template< typename T >
void vector<T>::pop_back()
{
pos--;
}


template< typename T >
unsigned vector<T>::size() const
{
	return pos;
}

template< typename T >
 T vector<T>::at(int index) const
{
	if(this->pos <= m_size){


	return *(m_data + index);
	}else if( pos > m_size){
		cout << "Index out of Bounds"<< endl;
		return *(m_data + 0);
	}
}

template< typename T >
bool vector<T>::empty() const{

	return pos ==0;;
}

template< typename T >
void vector<T>::clear()
{
	m_size = 0;
	pos = 0;
	if (m_data != nullptr)
	{
		delete[] m_data;
		m_data = nullptr;
	}else{
		cout << "Vector is already cleared.\nNo Exception thrown to show functionality.";

	}
}

template< typename T >
void vector<T>::swap(vector<T>& v2){

		unsigned temppos = v2.pos;
		unsigned tempsz = v2.m_size;
		T* tempdata = v2.m_data;

		v2.pos= this->pos;
		v2.m_size = this->m_size;
		v2.m_data = this->m_data;

		this->pos = temppos;
		this->m_size= tempsz;
		this->m_data = tempdata;
}

template< typename T >
void vector<T>::print()
{
	if(m_data == nullptr){
		cout << "\nm_data is nullptr" << endl;
	}else if(empty()){
		cout << "\nThe Vector is Empty" << endl;
	}else{
		for (int i = 0; i < pos ; i++){
			cout << *(m_data + i) << ",";

		}
	}

}


template< typename T >
vector<T>::~vector()
{
	delete [] m_data;
	m_data = nullptr;

}

