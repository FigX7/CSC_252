#include "vector.h"

int main(int argc, char* arg[])
{
	vector<int> vint(10);

	for( int i = 10; i < 20; i++)
		vint.push_back(i);

	unsigned s = vint.size();

	return 0;
}