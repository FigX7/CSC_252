#pragma once
#include<string>

using std::string;

class CSC252Exception
{
public:
	CSC252Exception(string m);
	~CSC252Exception();
	const string reason();

private:
	string msg;
};

