#include <iostream>

int main()
{
    int maxIntToCompare = 1000;
    int sum = 0;


    for(int i = 0; i < maxIntToCompare; i++)
    {
        if (i % 3 == 0 || i % 5 == 0) sum += i;
    }

    std::cout << sum;

    return 0;
}