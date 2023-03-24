// Problem_Solving_157.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>

using namespace std;

int Square(int Number)
{

    return sqrt(Number), (Number * Number);
}

int main()
{
    int CData;
    cin >> CData;

    cout << Square(CData) <<endl;
    return 0;
}

