#include <iostream>
#include <vector>
using namespace std;
int main()
{

    for (int i{1}, j{5}; i <= 10; i++, j++)
    {
        cout << i << " + " << j << " = " << i + j << endl;
    }

    cout << "========================" << endl;

    for (int x{1}; x <= 100; ++x)
    {
        cout << x;
        if (x % 10 == 0)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
    }

    cout << "========================" << endl;

    for (int z{1}; z <= 100; ++z)
    {
        cout << z;
        cout << ((z % 5 == 0) ? "\n" : " ");
    }

    cout << "========================" << endl;

    vector<int> nums{10, 20, 30, 40, 50, 50, 70, 80, 90, 100};

    for (int n{0}; n < nums.size(); n++)
    {
        cout << nums[n] << endl;
    }

    return 0;
}