#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> test_scores{100, 95, 99, 87, 88};

    cout << "First score at index 0: " << test_scores.at(0) << endl;
    cout << "Second score at index 1: " << test_scores.at(1) << endl;
    cout << "Third score at index 2: " << test_scores.at(2) << endl;
    cout << "Fourth score at index 3: " << test_scores.at(3) << endl;
    cout << "Fifth score at index 5: " << test_scores.at(4) << endl;

    cout << "\nCambia il valore del vettore 2" << endl;
    test_scores.at(2) = 195;
    cout << "Il vettore due è passato da 95 a: " << test_scores.at(2) << endl
         << endl;

    return 0;
}