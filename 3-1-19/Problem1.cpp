/* 1: 
 * Print out number of posiitons of pi
 * 
 * C++ Method:
 */



#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

void piToNDecimalPlaces(int n);

int main()
{
    int numOfPlaces;

    cout << "How many places of pi do you want to print? ";
    cin >> numOfPlaces;
    cin.ignore();
    piToNDecimalPlaces(numOfPlaces);
}



void piToNDecimalPlaces(int n)
{
    cout << fixed;
    cout << setprecision(n) << M_PI << endl;    
}
