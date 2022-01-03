#include <iostream>

int main()
{
    int test_scores[5]{100, 95, 99, 87, 88};

    std::cout << "First score at index 0: " << test_scores[0] << std::endl;
    std::cout << "First score at index 1: " << test_scores[1] << std::endl;
    std::cout << "First score at index 2: " << test_scores[2] << std::endl;
    std::cout << "First score at index 3: " << test_scores[3] << std::endl;
    std::cout << "First score at index 4: " << test_scores[4] << std::endl;

    std::cout << "======================================================" << std::endl;

    char *students[5]{"John", "Mark", "Matthew", "Luke", "Philip"};

    std::cout << "First name at index 0: " << students[0] << std::endl;
    std::cout << "First name at index 1: " << students[1] << std::endl;
    std::cout << "First name at index 2: " << students[2] << std::endl;
    std::cout << "First name at index 3: " << students[3] << std::endl;
    std::cout << "First name at index 4: " << students[4] << std::endl;

    return 0;
}