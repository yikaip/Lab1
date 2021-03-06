// Lab01.cpp 
// Yikai Peng

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <fstream>
using std::ifstream;

#include<string>
using std::string;


int main()
{
	string filename;
	ifstream inFile;
	double 
		first(0),
		second(0),
		last1(0),
		last2(0),
		temperary(0);
	int count(0);


	cout << "Enter the filename: " << endl;  //ask the user for the filename
	cin >> filename;//enter the file name

	inFile.open(filename); //open the file

	if (inFile.is_open()) //if the file is opened
	{
		while (!inFile.eof())//while it is not the end of the file
		{
			inFile >> temperary; //store the variables in inFile to temperary; 
			if (!inFile.fail()) //if the ifstream file did not failed
			{
				
				if (count == 0) //if it's the first count
				{
					first = temperary; //then store the first number to temp 
				}
				if (count == 1) //if it's the second count
				{
					second = temperary; //then store the second to temp
				}
				last1 = last2; //assign the second last value to last value
				last2 = temperary; // assign the last value to the temperary variable
				count++; // increamnet the count to get the count of varibles.
			}
			else 
			{
				cin.ignore(); //ignore the number between 
				cin.clear(); //clear the spaces between
			}
		}
	} 

	inFile.close(); //close the file

	cout << "The count of the total numbers in the file is " << count << endl; //print out the count
	cout << "The first number from the file is " << first << endl; //print out the first number
	cout << "The second number from the file is " << second << endl; //print out the second number
	cout << "The second last number from the file is " << last1 << endl; //print out the second last number
	cout << "The last number from the file is " << last2 << endl; //print out the last number

    return 0;
}

