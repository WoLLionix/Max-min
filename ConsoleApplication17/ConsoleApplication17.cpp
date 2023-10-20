#include <iostream>
#include <algorithm>
#include <array>

int main()
{
    std::array<int, 15> masyv;

    srand(time(0));

    for (int i = 0; i < 15; i++)
    {
        masyv[i] = rand() % 100 - 50;
    }

    std::cout << "Masyv: ";
    for (int i = 0; i < 15; i++)
    {
        std::cout << masyv[i] << ' ';
    }
    std::cout << std::endl;

    int minElement = *std::min_element(masyv.begin(), masyv.end());
    int maxElement = *std::max_element(masyv.begin(), masyv.end());

    std::cout << "Min element: " << minElement << std::endl;
    std::cout << "Max element: " << maxElement << std::endl;
}