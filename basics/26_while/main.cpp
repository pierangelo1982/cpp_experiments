#include <iostream>

int main()
{
    int i{1};

    while (i <= 10)
    {
        std::cout << i++ << std::endl;
    }

    std::cout << "===================== even =======================" << std::endl;
    i = 0;
    while (i <= 10)
    {
        i++;
        if (i % 2 == 0)
        {
            std::cout << i << std::endl;
        }
    }

    std::cout << "===================== odd =======================" << std::endl;
    i = 0;
    while (i <= 10)
    {
        i++;
        if (i % 2 != 0)
        {
            std::cout << i << std::endl;
        }
    }

    std::cout << "=====================" << std::endl;
    int scores[] = {100, 90, 87};
    i = 0;
    while (i < 3)
    {
        std::cout << scores[i] << std::endl;
        ++i;
    }
    i -= 1;
    while (i >= 0)
    {
        std::cout << scores[i] << std::endl;
        --i;
    }
}