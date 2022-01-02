#include <iostream>

/* charges:
    - $25 per snall room;
    - $35 per large room;
    sales tax rate is 6%;
    Estimates Valid for 30 days;


    number small rooms: 3;
    number large rooms: 1;
    Cost 110
    tax 6.6

    total estimates: 116.6
*/

using namespace std;

int main()
{

    const double price_per_small_rooms{25.0};
    const double price_per_large_rooms{35.0};
    const double sales_tax{0.06};
    const int estimate_expire{30};

    cout << "Quante small rooms? ";
    int small_rooms{0};
    cin >> small_rooms;

    cout << "quante large rooms? ";
    int large_rooms{0};
    cin >> large_rooms;

    cout << "Prezzo per small room: $" << price_per_small_rooms << endl;
    cout << "Prezzo per large room: $" << price_per_large_rooms << endl;

    double cost{(small_rooms * price_per_small_rooms) + (large_rooms * price_per_large_rooms)};
    cout << "Costo: $" << cost << endl;

    double tax_cost{cost * sales_tax};
    cout << "Tax: $" << tax_cost << endl;
    cout << "========================================================================================" << endl;
    cout << "Totale: $" << cost + tax_cost << endl;

    return 0;
}