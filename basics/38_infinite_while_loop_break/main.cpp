#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        char again{};
        cout << "Sei sicuro di voler continuare su questa giostra infinità? (Y/N) ";
        cin >> again;
        if (again == 'n' || again == 'N')
        {
            break;
        }
    }
}