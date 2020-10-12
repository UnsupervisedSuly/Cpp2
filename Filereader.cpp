/************************************************************************
Sulaimon Yussuf
Comp 376 Programming 1

This program determines whether or not a given
point is contained in a given rectangle	

*************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int freq[26]; // Use an array of 26 integers to keep track of the counts
	ifstream inFile; //Input file
	char ch;

	char inFileName[26];
	string outFileName;

	//	Prompt the user for the input file
	cout << "Enter the name of the input file --> ";
	cin >> inFileName;
	cout << endl << endl;

	// Properly open the file for processing and close the file when finished
	inFile.open( inFileName );
	if (inFile.fail())
	{
		cout << "File not open" <<endl ;

		exit(1);
	}
	// initialize frequency counts to zero for each possible letter
	for (int a = 0; a < 26; a++)

	{
		freq [a] = 0;
	}

	//Use a properly structured, eof-controlled loop to process the file
	inFile.get(ch);
	while (!inFile.eof())
	{

		ch = toupper(ch);
		freq[ch - 'A']++;
		inFile.get(ch);
	}

	// Output the total number of characters in the file, the number
	// of alphabetic and non-alphabetic characters, and the
	// frequencies of the alphabetic characters
	cout << endl << "Letter frequencies in this file are as follows." << endl;
	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		cout << ch << " : " << freq[ch - 'A'] << endl;
	}
	return 0;
}
