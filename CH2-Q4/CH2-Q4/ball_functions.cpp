#include "stdafx.h"
#include <iostream>
#include "grav.h"

double heightTower()
{
	std::cout << "Enter the height of the tower: ";
	double height;
	std::cin >> height;
	return height;
}

void printHeight(double ballin_height, double seconds)
{
	if (ballin_height > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballin_height << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

void heightBall(double height_of_tower, double seconds_passed)
{
	double distance_fallen = (myConstants::gravity * seconds_passed * seconds_passed) / 2;
	double ball_height = height_of_tower - distance_fallen;
	printHeight(ball_height, seconds_passed);
}

