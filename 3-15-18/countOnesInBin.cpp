#include <iostream>
#include <bitset.h>
using namespace std;

int countOnes(num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return num%2 + countOnes(num/2);
    }
    
}

int main()
{
    int num = 1234;
    bitset<16> bin(num);
    cout << bin << " " << countOnes(num);
}

