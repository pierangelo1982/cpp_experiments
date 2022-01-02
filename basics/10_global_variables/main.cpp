#include <iostream>

int age{22}; //global variables

int main()
{
    int age{10}; // local variable

    std::cout << age << std::endl;

    return 0;
}