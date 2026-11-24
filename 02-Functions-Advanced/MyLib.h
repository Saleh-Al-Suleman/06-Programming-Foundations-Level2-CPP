#pragma once
#include <iostream>

using namespace std;

namespace MyLib 
{
	void Test()
	{
		cout << "Hi, this is my first function in my own library!" << endl;
	}

	int Sum2Numbers(int number1, int number2)
	{
		return number1 + number2;
	}

    // this function is the validate input number
    int ReadNumber(string Message = "Please enter a valid number: ")
    {
        int Number = 0;
        cout << Message;
        cin >> Number;  //cin is object

        while (cin.fail())
        {
            // User didn't input a valid number
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << "Invalid Number, Enter a valid one: ";
            cin >> Number;
        }

        return Number;
    }

}