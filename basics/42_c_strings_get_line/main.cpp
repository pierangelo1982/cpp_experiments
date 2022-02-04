#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{

    char full_name[50]{};
    char temp[50]{};

    /*  std::cout << "Insrisci il tuo mone completo (nome cognome): ";
     std::cin >> full_name;

     std::cout << "Il tuo nome e cognome è: " << full_name << std::endl;

     std::cout << "--------------------------------" << std::endl;
     std::cout << "riproviamo, dai che stavolta funziona..." << std::endl; */

    std::cout << "Insrisci il tuo mone completo (nome cognome): ";
    cin.getline(full_name, 50);

    std::cout << "Il tuo nome e cognome è: " << full_name << std::endl;

    std::cout << "--------------------------------" << std::endl;

    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " sono uguali " << endl;
    else
        cout << temp << " and " << full_name << " sono diversi " << endl;

    cout << "==================================================================" << endl;
    cout << "convertiamo da undercase to uppercase" << endl;
    cout << "================================================================" << endl;

    for (size_t i{0}; i < strlen(full_name); i++)
    {
        if (isalpha(full_name[i]))
        {
            full_name[i] = toupper(full_name[i]);
        }
    }

    cout << "Il tuo nome completo è: " << full_name << endl;

    //strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " sono uguali " << endl;
    else
        cout << temp << " and " << full_name << " sono diversi " << endl;

    return 0;
}