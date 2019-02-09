// 2: Create a method which takes an array of ints between 1 and 10
// (Excluding one number) and returns the midding number.
//
// Extra challenge: solve without the use of a for loop

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int missingNum(vector<int> arr);

int main()
{
    int num[] = {1, 9, 2, 8, 3, 7, 4, 6, 5};
    vector<int> arr(num, num+9);

    missingNum(arr);

    
}

// With for loop
int missingNum(vector<int> arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    if (sum != 55)
    {
        cout << "Missing number " << 55 - sum << endl;
    }
    cout << sum << endl;

}