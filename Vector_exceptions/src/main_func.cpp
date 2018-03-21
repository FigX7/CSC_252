#include <iostream>
#include <exception>

#include "../src/vector.h"

int main(int argc, char* arg[])
{
	using std::cout;
	using std::endl;
	try 
	{

		vector<int> vint(10);
		for (int i = 10; i < 20; i++)
			vint.push_back(i);
		unsigned s = vint.size();
		int test = vint.at(200);
		vector<int> vi;
		vector<double> vd(10000);
		vector<short> vs(45);
	}
	catch ( CSC252Exception& exc )
	{
		cout << "Error Occurred in main : " << exc.reason() << endl;
	}
	catch (...)
	{
		cout << "Error Occurred in main " << endl;
	}

	return 0;
}