
//mergesort

#include <stdio.h>
#include <stdlib.h>

int *mergeSort(int *, int );
int *merge(int *, int * , int * , int , int );

void main()
{
    int n, i;

    printf("Enter the input size: ");
    scanf(" %d", &n);

    int *input = (int *)malloc(n*sizeof(int));

    for(i = 0; i < n; i++)
    {
        printf(":");
        scanf("%d", &input[i]);
    }

    input = mergeSort(input, n);

    printf("\nThe sorted array is as follows:\n");

    for(i = 0; i<n; i++)
    {
        printf("%d ", input[i]);

    }
}

int *mergeSort(int *a, int n)
{
    int i;

    if(n == 1)
    {
        return a;
    }

    int l = n/2;
    int r = n - (n/2);

    int * b = (int *)malloc(l*sizeof(int));
    int * c = (int *)malloc(r*sizeof(int));

    for(i = 0; i < l; i++)
    {
        b[i] = a[i];
    }

    for(i = 0; i < r; i++)
    {
        c[i] = a[l+i];
    }

    b = mergeSort(b, l);
    c = mergeSort(c, r);

    a = merge(a, b, c, l, r);

    return a;
}

int *merge(int *a, int * b, int * c, int l, int r)
{
    int i = 0, j = 0, k = 0, count = 0, sum = 0;

    while(i < l && j < r)
    {
        count++;

        if(b[i] < c[j])
        {
            a[k] = b[i];
            k++;
            i++;
        }
        else
        {
            a[k] = c[j];
            k++;
            j++;
        }

        sum += count;
    }

    while(i < l)
    {
        a[k] = b[i];
        k++;
        i++;
    }

    while(j < r)
    {
        a[k] = c[j];
        k++;
        j++;
    }

    printf("Left sub array : ");

    for(i = 0; i<l; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\tRight sub array : ");

    for(i = 0; i<r; i++)
    {
        printf("%d ", c[i]);
    }

    printf("\narray after merging: ");

    for(i = 0; i<l+r; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nNo. of true comparisons while merging the array : %d\n", count);

    return a;
}
/*Output 1:
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
Left sub array : 3      Right sub array : 4
array after merging: 3 4
No. of true comparisons while merging the array : 1
Left sub array : 5      Right sub array : 6
array after merging: 5 6
No. of true comparisons while merging the array : 1
Left sub array : 3 4    Right sub array : 5 6
array after merging: 3 4 5 6
No. of true comparisons while merging the array : 2
Left sub array : 7      Right sub array : 8
array after merging: 7 8
No. of true comparisons while merging the array : 1
Left sub array : 10     Right sub array : 11
array after merging: 10 11
No. of true comparisons while merging the array : 1
Left sub array : 9      Right sub array : 10 11
array after merging: 9 10 11
No. of true comparisons while merging the array : 1
Left sub array : 7 8    Right sub array : 9 10 11
array after merging: 7 8 9 10 11
No. of true comparisons while merging the array : 2
Left sub array : 3 4 5 6        Right sub array : 7 8 9 10 11
array after merging: 3 4 5 6 7 8 9 10 11
No. of true comparisons while merging the array : 4

The sorted array is as follows:
3 4 5 6 7 8 9 10 11

//Output 2:
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
Left sub array : 11     Right sub array : 10
array after merging: 10 11
No. of true comparisons while merging the array : 1
Left sub array : 9      Right sub array : 8
array after merging: 8 9
No. of true comparisons while merging the array : 1
Left sub array : 10 11  Right sub array : 8 9
array after merging: 8 9 10 11
No. of true comparisons while merging the array : 2
Left sub array : 7      Right sub array : 6
array after merging: 6 7
No. of true comparisons while merging the array : 1
Left sub array : 4      Right sub array : 3
array after merging: 3 4
No. of true comparisons while merging the array : 1
Left sub array : 5      Right sub array : 3 4
array after merging: 3 4 5
No. of true comparisons while merging the array : 2
Left sub array : 6 7    Right sub array : 3 4 5
array after merging: 3 4 5 6 7
No. of true comparisons while merging the array : 3
Left sub array : 8 9 10 11      Right sub array : 3 4 5 6 7
array after merging: 3 4 5 6 7 8 9 10 11
No. of true comparisons while merging the array : 5

The sorted array is as follows:
3 4 5 6 7 8 9 10 11

//Output 3:
Enter the input size: 9
:6
:4
:3
:9
:8
:11
:5
:7
:10
Left sub array : 6      Right sub array : 4
array after merging: 4 6
No. of true comparisons while merging the array : 1
Left sub array : 3      Right sub array : 9
array after merging: 3 9
No. of true comparisons while merging the array : 1
Left sub array : 4 6    Right sub array : 3 9
array after merging: 3 4 6 9
No. of true comparisons while merging the array : 3
Left sub array : 8      Right sub array : 11
array after merging: 8 11
No. of true comparisons while merging the array : 1
Left sub array : 7      Right sub array : 10
array after merging: 7 10
No. of true comparisons while merging the array : 1
Left sub array : 5      Right sub array : 7 10
array after merging: 5 7 10
No. of true comparisons while merging the array : 1
Left sub array : 8 11   Right sub array : 5 7 10
array after merging: 5 7 8 10 11
No. of true comparisons while merging the array : 4
Left sub array : 3 4 6 9        Right sub array : 5 7 8 10 11
array after merging: 3 4 5 6 7 8 9 10 11
No. of true comparisons while merging the array : 7

The sorted array is as follows:
3 4 5 6 7 8 9 10 11
*/

