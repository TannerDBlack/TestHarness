// ConsoleTestApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <iostream>
#include <vector>


#define STATUS int 
#define LOG(a) std::cout<<a<<std::endl;
#define LOG_FUNC(a) std::cout<<__FUNCTION__<<"::"<<a<<std::endl;



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

	LOG("Hello, World");
	

	actions.push_back(new Measure());
	actions.push_back(new Move());
	actions.push_back(new Measure());
	actions.push_back(new Move());
	actions.push_back(new Measure());
	actions.push_back(new Move());
	actions.push_back(new Measure());
	actions.push_back(new Move());
	actions.push_back(new Move());

	std::cout << std::endl;
	for (auto action : actions)
	{
		Action * act = action;
		std::cout << act->execute()<< std::endl;
		delete act;
		act = nullptr;
	}
	




	std::system("PAUSE");


    return 0;
}

