#pragma once
#include <string>
class Submarine
{
	public:
		Submarine();
		void up(int);
		void down(int);
		void forward(int);
		void parseCommand(std::string);
		int getDepth();
		int getHorizontalPosition();
		int getDepthPositionProduct();
private:
	int depth;
	int horizontalPosition;
};

