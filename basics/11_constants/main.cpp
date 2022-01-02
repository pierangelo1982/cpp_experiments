#include <iostream>

int main()
{

    std::cout << "Calcolo costo pulizia stanze" << std::endl;
    std::cout << "Quanste Stanze vuoi pulire?" << std::endl;

    int number_of_rooms{0};
    std::cin >> number_of_rooms;

    const double price_per_room{30.50};
    const double sales_tax{0.06};
    const int estimate_expire{30};

    std::cout << "Stima del costo del servizio" << std::endl;
    std::cout << "Numero di Stanze: " << number_of_rooms << std::endl;
    std::cout << "Costo per stanza: $" << price_per_room << std::endl;
    std::cout << "Prezzo: €" << price_per_room * number_of_rooms << std::endl;
    std::cout << "Tassazione: €" << price_per_room * number_of_rooms * sales_tax << std::endl;
    std::cout << "************************************************" << std::endl;

    std::cout << "Totale: €." << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << std::endl;
    std::cout << "Offerta valida per " << estimate_expire << " giorni" << std::endl;
    return 0;
}