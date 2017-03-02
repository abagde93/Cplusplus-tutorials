#include "stdafx.h"
#include <iostream>

bool isPrime(int user_input)
{
	if (user_input == 2)
		return true;
	if (user_input == 3)
		return true;
	if (user_input == 5)
		return true;
	if (user_input == 7)
		return true;
	return false;
}

int main()
{
	int number;
	std::cout << "Enter a number: ";
    std::cin >> number;
	
	bool prime = isPrime(number);
	
	if (prime)
	{
		std::cout << "The number is prime" << std::endl;
	}

	else
		std::cout << "The number is not prime" << std::endl;

	return 0;

}