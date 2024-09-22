#include <iostream>

bool checkIfIsPalindrome(int n)
{
    if (std::to_string(n).length() == 1) return true;

    std::string reversed;

    for(int ii = std::to_string(n).length(); ii > 0; ii--)
    {
        reversed.push_back(std::to_string(n)[ii - 1]);
    }

    if (std::stoi(reversed) == n) return true;

    return false;
}

int main()
{
    int largestPalindrome;

    for(int i = 111; i <= 999; i++)
    {
        for(int ii = 111; ii <= 999; ii++)
        {
            int product = i * ii;
            
            if (checkIfIsPalindrome(product) && product > largestPalindrome)
            {
                largestPalindrome = product;
            }
        }
    }
    
    std::cout << largestPalindrome << std::endl;
    return 0;
}
