#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vector1{};
    std::vector<int> vector2{};

    vector1.push_back(10);
    vector1.push_back(20);
    /* std::cout << vector1.at(0) << std::endl; */

    vector2.push_back(100);
    vector2.push_back(200);

    std::vector<std::vector<int>> vector_2d{};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    std::cout << "Vector 1 pos 1: " << vector_2d[0][0] << std::endl;
    std::cout << "Vector 1 pos 2: " << vector_2d[0][1] << std::endl;
    std::cout << "Vector 1 pos 1: " << vector_2d[1][0] << std::endl;
    std::cout << "Vector 2 pos 1: " << vector_2d[1][1] << std::endl;
    std::cout << "Mostro con metodo .at: " << std::endl;
    std::cout << "Vector 1 pos 1: " << vector_2d.at(0).at(0) << std::endl;
    std::cout << "Vector 1 pos 2: " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "Vector 1 pos 1: " << vector_2d.at(1).at(0) << std::endl;
    std::cout << "Vector 2 pos 1: " << vector_2d.at(1).at(1) << std::endl;

    std::cout << "Cambio valori: " << std::endl;
    std::cout << "====================================" << std::endl;

    vector_2d.at(0).at(1) = 40;
    std::cout << "vediamo? " << vector_2d.at(0).at(1) << std::endl;

    std::cout << "\nCambio valori vector1 e aggiorno vector_2d: " << std::endl;
    std::cout << "====================================" << std::endl;
    vector1.at(0) = 1000;
    vector_2d.at(0) = vector1;

    std::cout << "Vector 1 pos 1: " << vector_2d.at(0).at(0) << std::endl;
    std::cout << "Vector 1 pos 2: " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "Vector 1 pos 1: " << vector_2d.at(1).at(0) << std::endl;
    std::cout << "Vector 2 pos 1: " << vector_2d.at(1).at(1) << std::endl;
    /* std::cout << vector2.at(0) << std::endl; */

    return 0;
}