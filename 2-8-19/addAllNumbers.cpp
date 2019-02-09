//1: Create method that takes an int as an argument.
// Add up all the numbers from 1 to the number tou passed into the function.
//For example, if the input is 4, then your function should return 10
// because 1 + 2 + 3 + 4 = 10
#include <iostream>

using namespace std;

int addAllInts(int toNum);
int sum(int x);


int main()
{
    int num;
    cout << "Add num to add: ";
    cin >> num;
    cin.ignore();
    cout << addAllInts(num) << endl;
    cout << sum(num) << endl;

    return 0;
}

int addAllInts(int toNum)
{
    int sum = 0;
    for (int i = 1; i <= toNum; i++)
    {
        sum += i;
    }

    return sum;
}


// recursive method
int sum(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x + sum(x - 1);
    }
    
}