def printer(direction):
  if(direction==0):
    for i in range(c,len(myList)-(c)):
      print(myList[c][i])

  if(direction==1):
    for i in range(c+1,len(myList)-(c)):
      print(myList[i][len(myList)-(c+1)])

  if(direction==2):
    for i in range(len(myList[0])-(c+2),-1,-1):
      print(myList[len(myList)-(c+1)][i])

  if(direction==3):
    for i in range(len(myList)-(c+2),(c),-1):
      print(myList[i][c])

myList = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
direction=0
c=0

for i in range(20):
  if(direction==4):
    direction=0
  printer(direction)
  if(direction==3):
    c+=1
  direction+=1