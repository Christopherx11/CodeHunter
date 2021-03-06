// CodeHunter.cpp : This file contains the 'main' function. Program execution begins and ends there. 
//
#include "pch.h" // This line only needed for console C++ project, omit this for Empty C++ Project.
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string textToAnalyze; //analyze the string of characters 
	//int foo = 0; variable is not in use so it is not relevant to the code and should be removed 
	int vowels = 0; //integer variable for vowels 
	int consonants = 0; //integer variable for consonants 
	int digits = 0; //integer variable for digits 
	int spaces = 0; //integer variable for spaces 
	int lengthOfStringSubmittedForAnalysis = 0; //integer value for the length of the sentence 
	int unknownCharacters = 0; //integer value for any unknown characters 
	int checkSum = 0; //integer value to check the sum of the sentence submitted 
	//int bar = 0; variable is not in use so it is not relevant to the code and should be removed

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze); //this is to analyze the text

	for (int i = 0; i < textToAnalyze.length(); ++i) //i is a placeholder variable, for loop
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' || //if there are vowels in either lower case or capital add them to the sum of the sentence 
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels; //add to vowels in the sentence 
		}
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z')) //this analyzes consonants 
		{
			++consonants; //add to consonants in the sentence 
		} 
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9') 
		{
			++digits; //add to digits in the sentence 
		}
		else if (textToAnalyze[i] == ' ') //' ' refers to spaces in a sentence if any 
		{
			++spaces; //add to any spaces in the sentence 
		}
		else
		{
			++unknownCharacters; //add any unknown characters in the sentence 
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces; //add all the values together 

	cout << "Vowels: " << vowels << endl; //all of these cout statements will display the results of the length of text that was submitted for analysis 
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	if (checkSum == lengthOfStringSubmittedForAnalysis) //if the variable checksum is equal to the length the statement is true
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else //if not true display the message below to the console 
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause"); //pause the console

	return 0; //end the program 
}