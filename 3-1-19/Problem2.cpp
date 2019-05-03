/* 2:
 * Write function that determines if string is a palindrome
 * 
 * C++ Recursive Method
 */

#include <iostream>

using namespace std;

bool palindromeRecursive(string s);

int main()
{
    string palin = "racecar";

    for (int i = 0; i < palin.length(); i++)
    {
        if (palin[i] != palin[(palin.length() - 1) - i])
        {
            cout << "false" << endl;
            break;
        }
        
    }
}


bool palindromeRecursive(string s)
{

}
