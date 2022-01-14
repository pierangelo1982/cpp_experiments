#include <iostream>
using namespace std;

int main()
{
    char selection{};
    do
    {
        double width{}, height{};
        cout << "Inserisci larghezza e altezza separate da uno spazio: ";
        cin >> width >> height;

        double area{width * height};
        cout << "Area: " << area << endl;
        cout << "Vuoi calcolare un altra area? (Y/N): ";
        cin >> selection;
    } while (selection == 'y' || selection == 'y');

    cout << "grazie!"<< endl;
    
    return 0;
}