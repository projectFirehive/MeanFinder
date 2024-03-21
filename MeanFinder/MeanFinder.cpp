// MeanFinder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double inputList[] = { 30, 90, 60, 70, 5, 1, 1, 50, 1, 50, 80, 30, 1, 10, 85, 10, 50, 20, 50, 50, 30, 1, 30, 40, 30, 20, 50, 30, 98, 35 };
    double sum = 0;
    for (auto& num : inputList) {
        sum += num;
    }
    double mean = (sum / sizeof(inputList));
    cout << mean;
    return 0;
}