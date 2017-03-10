#include "stdafx.h"
#include <string>
#include <iostream>

int main()
{
	std::cout << "Enter your full name: ";
	std::string name;
	std::getline(std::cin, name);

	std::cout << "Enter your age";
	int age;
	std::cin >> age;

	int letters = name.length();
	double age_for_a_letter = double(age)/double(letters);
	std::cout << "You've lived " << age_for_a_letter << " years for each letter in your name.\n";

	return 0;
}