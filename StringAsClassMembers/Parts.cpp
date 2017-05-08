#include "Parts.h"
#include <iostream> 
#include <string>


void Parts::setPart(std::string partName_, int partNumber_, double cost_)
{
	partName = partName_;
	partNumber = partNumber_;
	cost = cost_;
}
void Parts::showParts() // display data
{
	std::cout << "Name: " << partName << std::endl;
	std::cout << "Number: " << partNumber << std::endl;
	std::cout << "Cost: " << cost << std::endl;

}