#include "Submarine.h"
#include <string>

Submarine::Submarine()
{
	this->depth = 0;
	this->horizontalPosition = 0;
}

void Submarine::up(int y)
{
	this->depth -= y;
}

void Submarine::down(int y)
{
	this->depth += y;
}

void Submarine::forward(int x)
{
	this->horizontalPosition += x;
}

void Submarine::parseCommand(std::string rawCommand)
{
	std::string commandDelimiter = " ";
	int delimiterLength = commandDelimiter.length();
	int delimiterPosition = rawCommand.find(commandDelimiter);
	std::string command = rawCommand.substr(0, delimiterPosition);
	int commandValue = stoi(rawCommand.substr(delimiterPosition + delimiterLength, rawCommand.length() - delimiterPosition - delimiterLength));
	if (command == "up") {
		this->up(commandValue);
	}else if(command == "down") {
		this->down(commandValue);
	}
	else if (command == "forward") {
		this->forward(commandValue);
	}
}

int Submarine::getDepth()
{
	return this->depth;
}

int Submarine::getHorizontalPosition()
{
	return this->horizontalPosition;
}

int Submarine::getDepthPositionProduct()
{
	return this->depth * this->horizontalPosition;
}

