#include "vector.h"
#include <iostream>

template<typename T>
void swap(T& var1,T& var2){
	T temp = var1;
	var1 = var2;
	var2 = temp;
}


int main(int argc, char* argv[])
{
	using std::cout;
	using std::endl;

	int x = 1;
	int y = 2;

	cout <<  " x  = " << x << endl;
	cout <<  " y  = " << y << endl;
	cout<< "-------------- Test Global Swap function--------------" <<  endl;
	swap(x,y);
	cout <<  " x after swap  = " << x << endl;
	cout <<  " y  after swap = " << y << endl;

	cout<< "-------------- Defalut Constructor with= intVector1 --------------" <<  endl;
	vector<int> intVector1;
	intVector1.print();

	cout<< "-------------- Test Constructor with argument size = intVector2 --------------" <<  endl;
	vector<int> intVector2(10);
	intVector2.print();

	cout<< "-------------- Test Contructor with arguments(size = 10,default value= 7) = intVector3 --------------" <<  endl;

	vector<int> intVector3(10,7);
	intVector3.print();

	cout<< "\n-------------- Test push_back = intVector2 --------------" <<  endl;
	for (int i = 0; i < 10; i++){
		intVector2.push_back( i + 1);
	}
	intVector2.print();

	cout<< "\n-------------- Test popback = intVector2----------------" <<  endl;
	for (int j = 0; j < 10; j++){
			cout << "popping at element: " << j << endl;
			intVector2.pop_back();
	}
	intVector2.print();
	cout<< "--------------Test size() on intVector2--------------------" <<  endl;
	cout << intVector2.size() << endl;

	cout<< "--------------Test at() on intVector3--------------------" <<  endl;

	cout << intVector3.at(5) << endl;


	cout<< "\n--------------Test empty() on intVector2 --------------------" <<  endl;
	cout <<  std::boolalpha << intVector2.empty()<<endl;

	cout<< "\n--------------Test clear() onn intVector3 --------------------" <<  endl;

	intVector3.clear();
	intVector3.print();
	cout<< "\n--------------Test swap() on  on intVector5 and intVector6--------------------" <<  endl;

	vector<int> intVector5(10,5);
	intVector5.print();

	cout << endl;
	vector<int> intVector6(10,6);
	intVector6.print();
	cout << endl;
	intVector5.swap(intVector6);
	cout << endl;
	intVector5.print();
	cout << endl;
	cout << endl;
	intVector6.print();

	return 0;
}
