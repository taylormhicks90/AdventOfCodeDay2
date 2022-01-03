// AdventOfCodeDay2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Submarine.h"

int main()
{
    Submarine sub;
    std::ifstream commandFile;
    commandFile.open("submarine_commands.txt");
    if (commandFile.is_open()) {
        std::string command;
        while (std::getline(commandFile,command))
        {
            sub.parseCommand(command);
        }
    }
    else {
        return 1;
    }
    commandFile.close();
    std::cout << "Depth: " << sub.getDepth() << std::endl;
    std::cout << "Horizontal Position: " << sub.getHorizontalPosition() << std::endl;
    std::cout << "Product: " << sub.getDepthPositionProduct() << std::endl << std::endl;
    std::cout << "Provide Input To Exit" << std::endl;
    std::string input;
    std::cin >> input;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
