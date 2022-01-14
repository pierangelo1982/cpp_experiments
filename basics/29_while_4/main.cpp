#include <iostream>
using namespace std;

int main()
{
    bool done{false};
    int number{};
    while (!done)
    {
        cout << "Inserisci un numero intero tra 1 e 5: ";
        cin >> number;
        if (number <= 1 || number >= 5)
        {
            cout << "Numero fuori dal range" << endl;
        }
        else
        {
            cout << "Grazie!" << endl;
            done = true;
        }
    }
}