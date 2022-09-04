/*
* Christopher Kelley
* IT 312 SNHU
* 6-3 Final Project Building Block Four: Programming (Reading From a File) 
*/
// FarkleGameRules.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
	//declarations 
	string line;

	ifstream myFile("Farkle_Rules.txt");

	// This will check if the file is open
	if (myFile.is_open())
	{
		//writes each line to the console
		while (getline(myFile, line))
		{
			cout << line << '\n';
		}
		//closes file
		myFile.close();
	}
	//Output and let the user know if it could not open the file
	else cout << "Cannot Open File!!!\n";
}
