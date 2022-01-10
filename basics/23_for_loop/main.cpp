#include <iostream>

int main()
{
    for (int i{1}; i < 10; i++)
    {
        std::cout << i << std::endl;
    }

    std::cout << "=============================" << std::endl;

    for (int x{1}; x < 10; x += 2)
    {
        std::cout << x << std::endl;
    }

    std::cout << "=============================" << std::endl;

    for (int y{10}; y > 0; y--)
    {
        std::cout << y << std::endl;
    }

    std::cout << "=============================" << std::endl;

    for (int z{10}; z <= 100; z += 10)
    {
        std::cout << z << std::endl;
    }

    std::cout << "=============================" << std::endl;

    for (int z{10}; z <= 100; z += 10)
    {
        if (z % 15 == 0)
        {
            std::cout << z << std::endl;
        }
    }

    std::cout << "=============================" << std::endl;

    return 0;
}