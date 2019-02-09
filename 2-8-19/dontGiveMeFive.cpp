/* 4: Get start and end number, and print out how many numbers
there are in between EXCLUDING ANY NUMBER with 5.
*/
#include <iostream>

using namespace std;

int dontGiveMeFiveRec(int start, int end);
bool fiveFoundRec(int num);

int main()
{
	cout << dontGiveMeFiveRec(1, 9) << endl;
}


int dontGiveMeFiveRec(int start, int end)
{
	int n = 0;

	for (int i = start; i <= end; ++i)
	{
		if (!fiveFoundRec(i))
		{
			n += 1;
		}
	}
	return n;
		
}

bool fiveFoundRec(int num) ///3542
{
	// No 5 is found or first digit is zero
	if ((num % 5 != 0) || (num % 10 == 0))
	{
		// Check for more digits
		if (num / 10 != 0)
		{
			// more digits exist - recursive call
			fiveFoundRec(num / 10);
		}
	}

	// BAse case:
	// if 5 is found
	else if (num % 5 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}