#include <iostream>

using namespace std;
int main()
{
    int number{};
    cout << "Inserisci un numero intero tra 1 e 5: ";
    cin >> number;

    while (number <= 1 || number >= 5)
    {
        cout << "Inserisci un numero intero tra 1 e 5: ";
        cin >> number;
    }

    cout << "Grazie" << endl;
}