// 02-Functions-Advanced.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyLib.h"

using namespace std;

// 1. Function Declaration (Prototype)
int Sum(int number1, int number2);

// Default parameters 
int MySum1(int num1, int num2, int num3 = 0, int num4 = 0)
{
    return (num1 + num2 + num3 + num4);
}

// Overloaded functions sharing the same name with different signatures
double MySum(double a, double b)
{
    return (a + b);
}

int MySum(int a, int b)
{
    return (a + b);
}

int MySum(int a, int b, int c)
{
    return (a + b + c);
}

int MySum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}

void Function4()
{
    cout << "Hi, I'm Function 4!" << endl;
}

void Function3()
{
    Function4();
}

void Function2()
{
    Function3();
}

void Function1()
{
    Function2();
}

// Type this declaration
void PrintWelcomeMessage(string Name);

// Example 1: Print numbers from N down to M using Recursion
void PrintNumbersDown(int N, int M)
{
    if (N >= M)
    {
        cout << N << " ";
        PrintNumbersDown(N - 1, M);
    }
}

// Example 2: Print numbers from M up to N using Recursion
void PrintNumbersUp(int M, int N)
{
    if (M <= N)
    {
        cout << M << " ";
        PrintNumbersUp(M + 1, N);
    }
}

// Example 3: Calculate Power (Base ^ Power) using Recursion
int MyPower(int Base, int Power)
{
    if (Power == 0)
        return 1;
    else
        return (Base * MyPower(Base, Power - 1));
}

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
    /*cout << "Bitwise Result (12 | 25): " << (12 | 25) << endl;

    // Example 2: Logical OR (||) evaluates truthiness (returns 1 for true)
    cout << "Logical Result (12 || 25): " << (12 || 25) << endl;*/

    // Lesson #14 - Function Declaration vs Definition
    /*cout << "Sum (10 + 20) = " << Sum(10, 20) << endl;*/


    // Lesson #15 - Default Parameters
    /*cout << "Sum of 2 numbers: " << MySum1(10, 20) << endl;
    cout << "Sum of 3 numbers: " << MySum1(10, 20, 30) << endl;
    cout << "Sum of 4 numbers: " << MySum1(10, 20, 30, 40) << endl;*/

    // Lesson #16 - Function Overloading
    /*cout << "Sum (2 ints): " << MySum(10, 20) << endl;
    cout << "Sum (2 doubles): " << MySum(10.5, 20.3) << endl;
    cout << "Sum (3 ints): " << MySum(10, 20, 30) << endl;
    cout << "Sum (4 ints): " << MySum(10, 20, 30, 40) << endl;*/

    // Lesson #17 - Call Stack / Call Hierarchy
    /*Function1(); */

    // Lesson #18 - VS Function Tips
    /*PrintWelcomeMessage("Saleh");*/

    // Lesson #19 - Recursion
    cout << "Numbers from 10 down to 1:" << endl;
    PrintNumbersDown(10, 1);

    cout << "\n\nNumbers from 1 up to 10:" << endl;
    PrintNumbersUp(1, 10);

    cout << "\n\n2^4 = " << MyPower(2, 4) << endl;

    system("pause >0");
    return 0;
}
// 2. Function Definition (Implementation)
int Sum(int number1, int number2)
{
    return number1 + number2;
}


void PrintWelcomeMessage(string Name)
{
    cout << "Welcome, " << Name << "!" << endl;
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
