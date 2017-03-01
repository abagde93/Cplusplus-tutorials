#include "stdafx.h"
#include <iostream>

int readNumber()
{
	std::cout << "Enter a number: ";
	int number;
	std::cin >> number;
	return number;
}

void writeAnswer(int user_number)
{
	std::cout << "User entered: " << user_number << std::endl;
}