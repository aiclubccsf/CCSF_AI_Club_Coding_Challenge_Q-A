/* 
    Reverse a set of Integers
    ex: ex: 847362 becomes 263748

    This answer provided by Rachel Vancleave
*/
#include <iostream>

using namespace std;

void reverseInt(int num);

int main()
{
    int num;
    cout << "Enter an int: ";
    cin >> num;
    reverseInt(num);

    cout << endl;
}

void reverseInt(int num)
{
    cout << num % 10;

    // Base case
    if (num / 10 != 0)
    {
        reverseInt(num / 10);
    }

}