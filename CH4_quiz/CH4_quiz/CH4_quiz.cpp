#include "stdafx.h"
#include <iostream>
#include <string>

//Define different monster types
enum class MonsterType
{
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};

//Struct represents a single monster
struct Monster
{
	MonsterType type;
	std::string name;
	int health;

};

std::string getMonsterTypeString(Monster monster)
{
	if (monster.type == MonsterType::OGRE)
		return "Ogre";
	if (monster.type == MonsterType::DRAGON)
		return "Dragon";
	if (monster.type == MonsterType::ORC)
		return "Orc";
	if (monster.type == MonsterType::GIANT_SPIDER)
		return "Giant Spider";
	if (monster.type == MonsterType::SLIME)
		return "Slime";

	return "Unknown";
}


// Print our monster's stats
void printMonster(Monster monster)
{
	std::cout << "This " << getMonsterTypeString(monster);
	std::cout << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main()
{

	Monster ogre = { MonsterType::OGRE, "Torg", 145 };
	Monster slime = { MonsterType::SLIME, "Blurp", 23 };

	printMonster(ogre);
	printMonster(slime);

	return 0;
}

