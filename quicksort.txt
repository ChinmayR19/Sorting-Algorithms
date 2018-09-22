

//quicksort

#include <stdio.h>
#include <stdlib.h>

void quickSort(int, int);
int part(int , int );
void swap(int , int );

int a[30] = {0};
int n;

void main()
{
    int i;

    printf("Enter the input size: ");
    scanf(" %d", &n);

    for(i = 0; i < n; i++)
    {
        printf(":");
        scanf("%d", &a[i]);
    }

    quickSort(0, n-1);

    printf("\nThe sorted array is as follows:\n");

    for(i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}

void quickSort(int st, int ed)
{
    int p;

    if(st >= ed)
    {
        return;
    }

    p = part(st, ed);

    quickSort(st, p-1);

    quickSort(p+1, ed);

}

int part(int st, int ed)
{
    int p, i, count = 0;
    p = ed;
    ed--;

    printf("\nInitial array: ");

    for(i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\npivot:%d", a[p]);

    while(st <= ed)
    {
        if(a[st] < a[p])
        {
            st++;
        }

        if(a[ed] >= a[p])
        {
            ed--;
        }

        if(a[st] >= a[p] && a[ed] < a[p] && st <= ed)
        {
            swap(st, ed);
            count++;
        }
    }

    swap(st, p);

    printf("\nNo. of swaps: %d", count);
    printf("\nThe array after swapping is as follows : ");

    for(i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return st;
}

void swap(int b, int c)
{
    int temp = a[b];
    a[b] = a[c];
    a[c] = temp;
}

/*Output 1
Enter the input size: 9
:3
:4
:5
:6
:7
:8
:9
:10
:11

Initial array: 3 4 5 6 7 8 9 10 11
pivot:11
No. of swaps: 0
The array after swapping is as follows : 3 4 5 6 7 8 9 10 11
Initial array: 3 4 5 6 7 8 9 10 11
pivot:10
No. of swaps: 0
The array after swapping is as follows : 3 4 5 6 7 8 9 10 11
Initial array: 3 4 5 6 7 8 9 10 11
pivot:9
No. of swaps: 0
The array after swapping is as follows : 3 4 5 6 7 8 9 10 11
Initial array: 3 4 5 6 7 8 9 10 11
pivot:8
No. of swaps: 0
The array after swapping is as follows : 3 4 5 6 7 8 9 10 11
Initial array: 3 4 5 6 7 8 9 10 11
pivot:7
No. of swaps: 0
The array after swapping is as follows : 3 4 5 6 7 8 9 10 11
Initial array: 3 4 5 6 7 8 9 10 11
pivot:6
No. of swaps: 0
The array after swapping is as follows : 3 4 5 6 7 8 9 10 11
Initial array: 3 4 5 6 7 8 9 10 11
pivot:5
No. of swaps: 0
The array after swapping is as follows : 3 4 5 6 7 8 9 10 11
Initial array: 3 4 5 6 7 8 9 10 11
pivot:4
No. of swaps: 0
The array after swapping is as follows : 3 4 5 6 7 8 9 10 11
The sorted array is as follows:
3 4 5 6 7 8 9 10 11

//Output 2
Enter the input size: 9
:11
:10
:9
:8
:7
:6
:5
:4
:3

Initial array: 11 10 9 8 7 6 5 4 3
pivot:3
No. of swaps: 0
The array after swapping is as follows : 3 10 9 8 7 6 5 4 11
Initial array: 3 10 9 8 7 6 5 4 11
pivot:11
No. of swaps: 0
The array after swapping is as follows : 3 10 9 8 7 6 5 4 11
Initial array: 3 10 9 8 7 6 5 4 11
pivot:4
No. of swaps: 0
The array after swapping is as follows : 3 4 9 8 7 6 5 10 11
Initial array: 3 4 9 8 7 6 5 10 11
pivot:10
No. of swaps: 0
The array after swapping is as follows : 3 4 9 8 7 6 5 10 11
Initial array: 3 4 9 8 7 6 5 10 11
pivot:5
No. of swaps: 0
The array after swapping is as follows : 3 4 5 8 7 6 9 10 11
Initial array: 3 4 5 8 7 6 9 10 11
pivot:9
No. of swaps: 0
The array after swapping is as follows : 3 4 5 8 7 6 9 10 11
Initial array: 3 4 5 8 7 6 9 10 11
pivot:6
No. of swaps: 0
The array after swapping is as follows : 3 4 5 6 7 8 9 10 11
Initial array: 3 4 5 6 7 8 9 10 11
pivot:8
No. of swaps: 0
The array after swapping is as follows : 3 4 5 6 7 8 9 10 11
The sorted array is as follows:
3 4 5 6 7 8 9 10 11

//Output 3

Enter the input size: 9
:8
:3
:6
:9
:11
:5
:7
:10
:4

Initial array: 8 3 6 9 11 5 7 10 4
pivot:4
No. of swaps: 1
The array after swapping is as follows : 3 4 6 9 11 5 7 10 8
Initial array: 3 4 6 9 11 5 7 10 8
pivot:8
No. of swaps: 2
The array after swapping is as follows : 3 4 6 7 5 8 9 10 11
Initial array: 3 4 6 7 5 8 9 10 11
pivot:5
No. of swaps: 0
The array after swapping is as follows : 3 4 5 7 6 8 9 10 11
Initial array: 3 4 5 7 6 8 9 10 11
pivot:6
No. of swaps: 0
The array after swapping is as follows : 3 4 5 6 7 8 9 10 11
Initial array: 3 4 5 6 7 8 9 10 11
pivot:11
No. of swaps: 0
The array after swapping is as follows : 3 4 5 6 7 8 9 10 11
Initial array: 3 4 5 6 7 8 9 10 11
pivot:10
No. of swaps: 0
The array after swapping is as follows : 3 4 5 6 7 8 9 10 11
The sorted array is as follows:
3 4 5 6 7 8 9 10 11
*/



