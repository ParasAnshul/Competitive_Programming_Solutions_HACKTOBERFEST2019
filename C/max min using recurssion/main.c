#include <stdio.h>

int maximum(int a[], int loc, int len);
int minimum(int a[], int loc, int len);
int main()
{
    int array[100], N, max, min;
    int i;
    printf("Enter size of the array:");
    scanf("%d", &N);
    printf("Enter %d elements in array:\n", N);
    for(i=0; i<N; i++)
    {
        scanf("%d/n", &array[i]);
    }
    max = maximum(array, 0, N);
    min = minimum(array, 0, N);
    printf("Minimum element in array = %d\n", min);
    printf("Maximum element in array = %d\n", max);
    return 0;
}
int maximum(int a[], int loc, int len)
{
    int max;
    if(loc >= len-2)
    {
if(a[loc] > a[loc + 1])
return a[loc];
else
return a[loc+ 1];
}
max = maximum(a, loc + 1, len);
if(a[loc] > max)
return a[loc];
else
return max;
}
int minimum(int a[], int loc, int len)
{
    int min;

    if(loc >= len-2)
    {
        if(a[loc] < a[loc + 1])
            return a[loc];
        else
            return a[loc + 1];
    }

    min = minimum(a, loc + 1, len);

    if(a[loc] < min)
        return a[loc];
    else
        return min;
}
