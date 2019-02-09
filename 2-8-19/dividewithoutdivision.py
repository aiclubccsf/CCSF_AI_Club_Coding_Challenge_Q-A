''' 3: Divide without division, multiplcation, or modulus '''
dividend = int(input("Enter first number: "))
divisor = int(input("Enter second number: "))

quotient = 0
while dividend >= divisor:
    dividend = dividend - divisor
    quotient += 1

print (quotient)


