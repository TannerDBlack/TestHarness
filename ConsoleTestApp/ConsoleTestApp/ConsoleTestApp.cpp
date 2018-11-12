// ConsoleTestApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <iostream>
#include <vector>


#define STATUS int 


class Action
{
	
public:

	virtual bool execute()=0;

private:
	 STATUS state;

};

class Move: public Action
{
	
public:
	bool execute() override
	{
		
		std::cout << "Moving";
		return true;

	}


};

class Measure : public Action
{

public:
	bool execute() override
	{

		std::cout << "Measuring";
		return true;

	}


};






int main()
{
	std::vector<Action*> actions;

	std::cout << "Hello, World";
	

	actions.push_back(new Measure());
	actions.push_back(new Move());

	std::cout << std::endl;
	for (auto action : actions)
	{
		std::cout << action->execute()<< std::endl;
	}
	
	std::system("PAUSE");


    return 0;
}

