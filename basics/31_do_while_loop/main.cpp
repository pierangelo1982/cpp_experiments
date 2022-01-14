#include <iostream>

int main()
{
    int number{};
    do
    {
        std::cout << "Inserisci un numero tra 1 e 5: ";
        std::cin >> number;
    } while (number <= 1 || number >= 5);

    std::cout << "grazie" << std::endl;

    return 0;
}