#include <iostream>

int main()
{
    int favorite_number;
    std::cout << "Inserisci il tuo numero preferito fra 1 e 100: ";
    std::cin >> favorite_number;
    std::cout << "Fantastico, questo è anche il mio numero preferito" << std::endl;
    std::cout << "Davvero " << favorite_number << " è anche il mio numero preferito!" << std::endl;
    /* printf("Davvero %d è il mio numero preferito\n", favorite_number); */

    return 0;
}