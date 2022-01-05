#include <iostream>

using namespace std;

int main()
{
    int total{};
    int num1{}, num2{}, num3{};
    const int count{3};

    cout << "Inserisci 3 numeri interi separati dallo spazio: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average{0.0};

    cout << "I numeri inseriti sono: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "La somma totale è: " << total << endl;
    average = total / count;
    cout << "La media è: " << average << endl;

    return 0;
}