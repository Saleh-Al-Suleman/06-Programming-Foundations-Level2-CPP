// 02-Functions-Advanced.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyLib.h"

using namespace std;

int main()
{
    //#Lesson #08 

    /*MyLib::Test();
    cout << "Sum: " << MyLib::Sum2Numbers(20, 30) << "\n";*/

    //Lesson #09 
    //////              true         false
    ////Condition ? Expression1 : Expression2

    /*int number = 0;
    cout << "Please enter number: ";
    cin >> number;

    // Simple check: Positive or Negative
    string Result = (number >= 0) ? "Positive" : "Negative";
    cout << "Simple check: number is " << Result << endl;

    // Nested check: Zero, Positive, or Negative
    string DetailedResult = (number == 0) ? "Zero" : ((number > 0) ? "Positive" : "Negative");
    cout << "Detailed Check: Number is " << DetailedResult << endl;*/

    // Lesson #10 - Ranged Loop
    // Syntax: for (DataType Variable : ArrayOrCollection)

    /*cout << "Array elements: ";
    cout << "\n\t----------------------\n\t ";
    int Array[10] = { 1,2,3,4,5,6,7,8,9,10 };
    for (int n : Array)
    {
        cout << n << " ";
    }
    cout << "\n\t----------------------\n\n";

    // Iterating over an inline initializer list directly
    cout << "Direct array elements: ";
    cout << "\n\t----------------------\n\t ";
    for (int x : { 10, 20, 30, 40 })
    {
        cout << x << " ";
    }
    cout << "\n\t----------------------\n";*/

    // Lesson #11 - Validate Number
    /*int Number = MyLib::ReadNumber("Please enter a number: ");
    cout << "Your validated number is: " << Number << endl;*/

    // Lesson #12 - Bitwise AND (&) vs Logical AND (&&)

   /* // Example 1: Bitwise AND on binary representation
    // 12 in binary = 00001100
    // 25 in binary = 00011001
    // 12 & 25      = 00001000 (which equals 8 in decimal)
    cout << "Bitwise Result (12 & 25): " << (12 & 25) << endl;

    // Example 2: Logical AND (&&) evaluates truthiness (non-zero is true)
    cout << "Logical Result (12 && 25): " << (12 && 25) << endl;*/


    // Lesson #13 - Bitwise OR (|) vs Logical OR (||)

    // Example 1: Bitwise OR on binary representation
    // 12 in binary = 00001100
    // 25 in binary = 00011001
    // 12 | 25      = 00011101 (which equals 29 in decimal)
    cout << "Bitwise Result (12 | 25): " << (12 | 25) << endl;

    // Example 2: Logical OR (||) evaluates truthiness (returns 1 for true)
    cout << "Logical Result (12 || 25): " << (12 || 25) << endl;


    system("pause >0");
    return 0;
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
