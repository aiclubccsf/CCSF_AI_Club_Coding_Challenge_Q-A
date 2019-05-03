/*
    Given an array, print out the most occuring item in the list.
     ([1, 4, 2, 8, 6, 7, 2, 3, 2, 8, 2, 0, 9, 1] returns 2)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 4, 6, 4, 68, 6, 7, 2};
    int mostFreqInt = 0;
    int numOfFreqInt = 0;

    // Sort the vector from least to greatest
    sort(arr.begin(), arr.end());


    for (int i = 0; i < arr.size(); i++)
    {
        // Gets cur value
        int temp = arr[i];
        mostFreqInt += 1;

        
    }
}