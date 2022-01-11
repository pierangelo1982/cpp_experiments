#include <iostream>
#include <vector>

int main()
{
    int scores[]{10, 20, 30, 40, 50};

    for (int score : scores)
    {
        std::cout << score << std::endl;
    }

    std::cout << "=================" << std::endl;

    std::vector<double> temps{10.2, 3.4, 5.6, 21.5};
    double running_sum{0};
    for (auto temp : temps)
    {
        std::cout << temp << std::endl;
        running_sum += temp;
    }

    std::cout << "La media delle temperature è: " << running_sum / temps.size() << std::endl;

    std::cout << "=================" << std::endl;

    for (auto c : "pierangelo")
    {
        std::cout << c << std::endl;
    }

    return 0;
}