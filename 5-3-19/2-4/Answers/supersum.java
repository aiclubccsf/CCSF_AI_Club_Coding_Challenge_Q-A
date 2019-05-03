// Here is Brandyn Gabel's method of solution
// Taken from the whiteboard

int superSum(int[] arr) // assume sorted
{
    if (arr.length == 1) return arr[0];
    if (arr.length == 2) return (arr[0] + arr[1] + (arr[0] * arr[1]));
    int x = arr[arr.length - 1];
    int y = arr[arr.length - 2];
    int newInt = x + y + x*y
    int[] newArr = new int[arr.length - 1];
    for(int i = 0; i < newArr.length - 1; i++)
    {
        newArr[i] = arr[i];
    }

    superSum(newArr)

}