#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num_items{};
    cout << "Quanti numeri vuoi inserire? ";
    cin >> num_items;
    cout << endl;

    vector<int> data{};
    for (int i{1}; i <= num_items; i++)
    {
        int data_item{};
        cout << i << " - Inserisci il numero: ";
        cin >> data_item;
        cout << endl;
        data.push_back(data_item);
    }

    for (auto val : data)
    {
        cout << val << endl;
    }

    cout << "*** Display Histogram ****" << endl;
    for (auto val : data)
    {
        for (int i = 0; i <= val; i++)
        {
            cout << "-";
        }
        cout << endl;
    }
    cout << endl;
    cout << "*** Display Histogram (* every five) ****" << endl;
    for (auto val : data)
    {
        for (int i = 0; i <= val; i++)
        {
            
            cout << ((i % 5 == 0) ? "*" : "-");
        }
        cout << endl;
    }
    return 0;
}