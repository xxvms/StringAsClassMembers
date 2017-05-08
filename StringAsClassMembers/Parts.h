#pragma once
#include <string>

class Parts
{
private:
	std::string partName;
	int partNumber;
	double cost;

public:
	void setPart(std::string partName_, int partNumber_, double cost_);//set part name, price and number
	void showParts(); // display 
};
