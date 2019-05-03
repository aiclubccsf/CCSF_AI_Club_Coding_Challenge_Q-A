''' Given the following array of ints [9, 42, 251, 2041, 21002].
Write a method/function that sums the digits of each eleemnt (e.g. element 1; 4 + 2 = 6)
and returns an array of the sums sorted from greatest to least
'''

numInts = [9, 42, 251, 2041, 21002]
sortedInts = []

print("Initial List: " + str(numInts))

for i in range(len(numInts)):
    sum = 0

    while numInts[i] != 0:
        # adds all digits of each element
        # Check if the number is only a single digit
        if numInts[i] / 10 == 0:
            sum += numInts[i]
            numInts[i] = int(numInts[i] / 10)
        else:
            # Get single digit
            temp = numInts[i] % 10

            # Add single digit to the sum
            sum += temp

            # strip the first digit
            numInts[i] = int(numInts[i]/10)
    
    sortedInts.append(sum)

sortedInts.sort()

print("SUmmed and sorted list: " + str(sortedInts))


