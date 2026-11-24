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
}