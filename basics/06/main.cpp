#include <iostream>

/* using namespace std; // use the entire std namespace */
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int favorite_number;
    cout << "Inserisci il tuo numero preferito fra 1 e 100: ";
    cin >> favorite_number;
    cout << "Fantastico, questo è anche il mio numero preferito" << std::endl;
    cout << "Davvero " << favorite_number << " è anche il mio numero preferito!" << std::endl;
    /* printf("Davvero %d è il mio numero preferito\n", favorite_number); */

    return 0;
}