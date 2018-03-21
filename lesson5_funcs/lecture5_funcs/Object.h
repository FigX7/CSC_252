#pragma once

class Object
{
public:

	void setData(const double&);
	double getData();
	void setType(const int&);
	int getType();
private:
	int type = 0;
	double data = 0.0;
};
