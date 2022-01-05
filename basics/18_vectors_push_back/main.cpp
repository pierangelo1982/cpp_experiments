#include <iostream>
#include <vector>

int main()
{

    std::vector<int> test_scores{100, 95, 99, 87, 88};

    std::cout << "Dimensione: " << test_scores.size() << std::endl;

    std::cout << "Aggiungiamo altri 5 valori al vector" << std::endl;

    test_scores.push_back(134);
    test_scores.push_back(234);
    test_scores.push_back(123);
    test_scores.push_back(169);
    test_scores.push_back(265);

    std::cout << "Dimensione dopo push_back: " << test_scores.size() << std::endl;

    return 0;
}