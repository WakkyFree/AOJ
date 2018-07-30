#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int x;

    std::cin >> x;
    std::cout << std::setprecision(7) << pow(x, 3) << std::endl;
    return 0;
}
