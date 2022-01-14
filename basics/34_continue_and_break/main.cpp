#include <iostream>
#include <vector>

int main()
{
    std::vector<int> values{1, 2, -1, 3, -1, -99, 7, 8, 10};

    for (auto val : values)
    {
        if (val == -99)
        {
            break;
        }
        else if (val == -1)
        {
            continue;
        }
        else
        {
            std::cout << val << std::endl;
        }
    }
    return 0;
}