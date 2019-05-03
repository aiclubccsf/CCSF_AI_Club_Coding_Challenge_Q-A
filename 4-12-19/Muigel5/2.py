''' You have 100 doors in a roy that area initially closed.
You make 100 passed by the doors starting with the first door
every time. the first time you visit every door and toggle the
door (if the door is closed, you open it, if it's open you close it).
the second time you only visit every second door (door #2, #4, #6),
the third time, every 3rd door (door #3, 6, 9), ec, untill you
visit the 100th door. What state are the doors in after the last
pass? Which are open and which are closed? '''

#failed code lol
doors = []

# Set all doors to true
for i in range(100):
    doors.append(True)
print("Init")
print(doors)

# Key:
# True = Open
# False = Closed

# Open/close door
for h in range(1, 100):
    for i in range(100):
        if doors[i] == True:
            doors[i] = False
        else:
            doors[i] = True

for i in range(100):
    print(i, doors[i])


# Answer
# Any number that's a perfect square is open,
# Otherwise close
