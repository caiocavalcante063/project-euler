#include <iostream>

int main()
{
    int smallestEvenlyDivisible = 0;
    int i = 2520;

    while (smallestEvenlyDivisible == 0) {
        for(int ii = 1; ii <= 20; ii++)
        {
            if (i % ii != 0) {
                i++;
                break;
            }

            if (ii == 20) smallestEvenlyDivisible = i;
        }
    }
  

    std::cout << smallestEvenlyDivisible << std::endl;

    return 0;
}
