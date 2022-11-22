#include <iostream>
#include <cmath>
#include <string>
#include <list>
#include <vector>
#include <ctime>
#include <algorithm>

template<typename T>
T computeSum(T first, T second)
{
    return first + second;
}
int main()
{
    int sumFirst = 5, sumSecond = 9;
    std::cout << "Getting the sum of \"sumFirst\" and \"sumSecond\" variables using the \"computeSum()\" function: " << computeSum(sumFirst, sumSecond) << '\n';
    std::cout << "The \"computeSum()\" function will not work as expected for char, STL Contrainers, C-Style Arrays and custom data types such as structs or classes (without an overload)\n";

    std::cout << '\n';
}