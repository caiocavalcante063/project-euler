#include <iostream>

int main() 
{
    int lastTwoFibonacci[2] = {1, 2};
    int maxFibonacci = 4000000; /* 4 million */
    int sum = 2;

    while (true)
    {
        int tmp = lastTwoFibonacci[1];
        int currFibonacci = lastTwoFibonacci[0] + lastTwoFibonacci[1];

        lastTwoFibonacci[0] = tmp;
        lastTwoFibonacci[1] = currFibonacci;

        if (currFibonacci > maxFibonacci) break;
        if (currFibonacci % 2 == 0) sum += currFibonacci;
    }

    std::cout << sum << std::endl;

    return 0;
}