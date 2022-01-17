#include <iostream>
#include <vector>

int main()
{
    for (int outer_val{1}; outer_val <= 5; ++outer_val)
        for (int inner_val{1}; inner_val <= 5; ++inner_val)
            std::cout << outer_val << " --- " << inner_val << std::endl;

    std::cout << "--------------------------------" << std::endl;
    for (int num1{1}; num1 <= 10; ++num1)
    {
        for (int num2{1}; num2 <= 10; ++num2)
        {
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
        }
        std::cout << "--------------------------------" << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;
    int grid[5][3]{};
    for (int row{0}; row <= 5; ++row)
    {
        for (int col{0}; col <= 3; ++col)
        {
            grid[row][col] = 1000;
        }
    }
    std::cout << grid << std::endl;

    for (int row{0}; row <= 5; ++row)
    {
        for (int col{0}; col <= 3; ++col)
        {
            std::cout << grid[row][col] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "------------------------" << std::endl;
    std::vector<std::vector<int>> vector_2d{
        {1, 2, 3},
        {10, 20, 30, 40},
        {100, 200, 300, 400, 500}
    };

    for (auto vec : vector_2d)
    {
        for (auto val : vec)
        {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}