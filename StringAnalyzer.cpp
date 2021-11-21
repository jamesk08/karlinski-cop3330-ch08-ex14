/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 James Karlinski
 */

#include "std_lib_facilities.h"

vector<int> getVectorOfCharacter(vector<string> data)
{
	vector<int> numVec;
	for(int i = 0; i < data.size(); i++)
	{
		numVec.push_back(data[i].length());
	}
	return numVec;
}

string getLargest(vector<string> data)
{
	int index = 0;
    for(int i = 0; i < data.size(); i++)
    {
		if(data[i].length() > data[index].length()) 
			index = i;
    }
    return data[index];
}


string getSmallest(vector<string> data)
{
	int index = 0;
    for(int i = 0; i < data.size(); i++)
    {
		if(data[i].length() < data[index].length()) 
			index = i;
    }
    return data[index];
}

string getLexicographicallyLast(vector<string> data)
{
	sort(data.begin(), data.end());
	return data[data.size() -1];
}


string getLexicographicallyFirst(vector<string> data)
{
	sort(data.begin(), data.end());
	return data[0];
}

int main()
{
	// generate string data to process
	vector<string> data;
	data.push_back("Hi");
	data.push_back("How are you doing?");
	data.push_back("Tomatoes");
	data.push_back("Hey!");
	data.push_back("Have you ever danced with volves during a full moon?");

	vector<int> res =  getVectorOfCharacter(data);
	string lexFirst = getLexicographicallyFirst(data);
	string lexLast = getLexicographicallyLast(data);
	string largest = getLargest(data);
	string smallest = getSmallest(data);
	
	cout << "Character lengthwise vector : " << endl;
	
	for(int i = 0; i < data.size(); i++)
	{
		cout << data[i] << " : " << res[i] << endl;
	}
	
	cout << endl << endl;
	cout << "Smallest                =>  " << smallest << endl;
	cout << "Largest                 =>  " << largest << endl;
	cout << "Lexicographically first =>  " << lexFirst << endl;
	cout << "Lexicographically last  =>  " << lexLast << endl;

	// let user read the output and press any key to exit
	system("pause");
}