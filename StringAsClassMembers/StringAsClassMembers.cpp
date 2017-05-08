// StringAsClassMembers.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "Parts.h"


int main()
{

	Parts part1, part2;

	part1.setPart("Handle Bolt", 4473, 217.55); // set part
	part2.setPart("Start lever", 9924, 419.25); 

	std::cout << "First Part: "; part1.showParts(); // show parts
	std::cout << "Second Part: "; part2.showParts();

	system("pause");
    return 0;
}

