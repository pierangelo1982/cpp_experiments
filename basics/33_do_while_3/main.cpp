#include <iostream>
using namespace std;

int main()
{
    char selection{};

    do
    {
        cout << "------------------------" << endl;
        cout << "1 - Saluta!" << endl;
        cout << "2 - Offendi" << endl;
        cout << "3 - Chiedi Scusa" << endl;
        cout << "Q - esci" << endl;
        cout << "Inserisci la tua sceltà: ";
        cin >> selection;

        if (selection == '1')
        {
            cout << "Ciao!" << endl;
        }
        else if (selection == '2')
        {
            cout << "Sei antipatico" << endl;
        }
        else if (selection == '3')
        {
            cout << "Scusa, scherzavo!" << endl;
        }
        else if (selection == 'Q' || selection == 'q')
        {
            cout << "Addio!" << endl;
        }
        else
        {
            cout << "Hai inserito un valore non valido!" << endl;
        }

    } while (selection != 'Q' && selection != 'q');
    return 0;
}