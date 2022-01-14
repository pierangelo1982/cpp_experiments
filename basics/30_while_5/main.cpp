#include <iostream>

int main()
{
    int num{};
    std::cout << "Inserisci un numero - inizia il countdown:";
    std::cin >> num;
    while (num > 0)
    {
        std::cout << num << std::endl;
        --num;
    }
    std::cout << "Boooom!" << std::endl;
    return 0;
}