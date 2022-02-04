#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main()
{
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    // cout << first_name << endl;

    cout << "Inserisci il tuo nome: ";
    cin >> first_name;

    cout << "Inserisci il tuo cognome: ";
    cin >> last_name;
    cout << "----------------------------" << endl;

    cout << "Ciao, " << first_name << " il tuo nome è lungo " << strlen(first_name) << " caratteri" << endl;
    cout << "e il tuo cognome, " << last_name << " è lungo " << strlen(last_name) << " caratteri" << endl;

    cout << "----------------------------------------------------------------" << endl;

    strcpy(full_name, first_name); // copia first_name in full_name
    strcat(full_name, " ");        // concatena fiull_name con lo spazio
    strcat(full_name, last_name);  // aggiunge last_name a full name, dopo first_name e spazio

    cout << "il tuo nome completo è " << full_name << endl;

    return 0;
}