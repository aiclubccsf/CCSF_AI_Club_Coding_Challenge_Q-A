/* Problem 3:
 * Given two number represented by two linked lists,
 * write a function that returns sum list. The sum 
 * list is linked list representation of addition of
 * two input numbers. It isnot allowed to mdify the lists.
 * Also not allowed to use explicit extra space
 * (hint: use recursion)
 */

#include <iostream>
using namespace std;



class circle
{
private:
    int x;  // x pos
    int y;  // y pos
    int r;  // radius
    

    
    void youCantSeeMe()
    {
        cout << "You cant see me!" << endl;
    }



public:
    // Default constructor
    circle()
    {
        x = 0;
        y = 0;
        r = 0;
    }

    circle(int newX, int newY, int newR)
    {
        x = newX;
        y = newY;
        r = newR;
    }


    // Returns sum of all points of two circles
    int returnSumOfTwoCircles(circle circleToAdd)
    {
        int sum = x + circleToAdd.x + y + circleToAdd.y + r + circleToAdd.r;
        return sum;
    }



    // Setters/Getters
    void setX(int newX)
    {
        x = newX;
    }

    void setY(int newY)
    {
        y = newY;
    }

    void setR(int newR)
    {
        r = newR;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    int getR()
    {
        return r;
    }
};

int main()
{
    circle myCircle; 
    circle mySecondCircle(1, 3, 6);
    circle circ;
    circle thisCIrlce;
    circle a;

    cout << myCircle.getX() << " " << myCircle.getY() << " " << myCircle.getR() << endl;  
    cout << mySecondCircle.getX() << " " << mySecondCircle.getY() << " " << mySecondCircle.getR() << endl;

    cout << myCircle.returnSumOfTwoCircles(mySecondCircle) << endl;



    return 0;

}