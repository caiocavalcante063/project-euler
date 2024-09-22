#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

// Any divisor of a number greater than its square root is a multiple of a smaller divisor
// that has already been tested

bool checkIfIsPrime(int n) 
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0) return false; 
    }

    return true;
}

int main()
{
    long n = 600851475143;
    int potentiallyPrimeNumber = sqrt(n);

    while (true)
    {
        if (n % potentiallyPrimeNumber == 0 && checkIfIsPrime(potentiallyPrimeNumber)) break; 

        potentiallyPrimeNumber -= 1;
    }
    
    cout << potentiallyPrimeNumber << endl;

    return 0;
}