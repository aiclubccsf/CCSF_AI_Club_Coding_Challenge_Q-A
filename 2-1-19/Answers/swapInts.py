''' Swap two ints without using a third variable '''
''' This answer provided by Rachel Vancleave '''



def swapTwoInts():
    a = int(input("Enter first int for a: "))
    b = int(input("Enter second int for b: "))

    b = b+a
    a = b-a
    b = b-a

    print("a: ", a, "b: ", b)

    
swapTwoInts()
