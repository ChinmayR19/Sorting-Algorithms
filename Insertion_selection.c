

//Insertion sort
//Selection sort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insert_sort(int input[], int);
void select_sort(int input[], int );

void main()
{
    int n, i, input[30] = {0};

    printf("Enter the input size: ");
    scanf(" %d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }

    printf("\nInsertion sort:");
    insert_sort(input, n);
    printf("\nSelection sort:");
    select_sort(input, n);
}

void insert_sort(int input[30], int n)
{
    int output[30] = {0}, i, j, m = 0, count, temp, sum = 0, k;
    long int start, end;
    double cpu_time_used;
    start = clock();


    output[m] = input[0];

    for(i = 1; i < n; i++)
    {
        output[++m] = input[i];
        count = 0;
        j = m;

        while(output[j] < output[j-1] && j>0)
        {
            count++;
            temp = output[j-1];
            output[j-1] = output[j];
            output[j] = temp;
            j--;

        }

        sum += count;
        printf("\nNo. of true comparisons in iteration no. %d : %d", i, count);
        printf("\nThe list: ");

        for(k = 0; k<i+1; k++)
        {
            printf("%d ", output[k]);
        }
    }

    printf("\nsorted array:\n");

    for(k = 0; k < n; k++)
    {
        printf("%d ", output[k]);
    }

    printf("\nTotal no. of true comparisons : %d \n", sum);

    end = clock();
    cpu_time_used = (double) (end - start)/CLOCKS_PER_SEC;
    printf("\nthe time used in insertion sorting is %lf\n\n",cpu_time_used);
}

void select_sort(int input[30], int n)
{
    int i, max, j, k, temp, count, sum = 0, t;
    long int start, end;
    double cpu_time_used;
    start = clock();

    k = n;

    for(i = 1; i < n; i++)
    {
        max = 0;
        count = 0;


        for(j = 1; j < k; j++)
        {
              if(input[j] > input[max])
              {
                  max = j;
                  count++;
              }
        }

        printf("\nNo. of true comparisons in iteration no. %d : %d", i, count);

        temp = input[k-1];
        input[k-1] = input[max];
        input[max] = temp;
        k--;

        sum += count;

        printf("\nThe list: ");

        for(t = 0; t<n; t++)
        {
            printf("%d ", input[t]);
        }
    }

    printf("\nSorted Array\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", input[i]);
    }

    printf("\nTotal no. of true comparisons : %d \n", sum);

    end = clock();
    cpu_time_used = (double) (end - start)/CLOCKS_PER_SEC;
    printf("\nthe time used in Selection sorting is %lf\n\n",cpu_time_used);
}

/*Output 1
Enter the input size: 9
1
2
3
4
5
6
7
8
9

Insertion sort:
No. of true comparisons in iteration no. 1 : 0
The list: 1 2
No. of true comparisons in iteration no. 2 : 0
The list: 1 2 3
No. of true comparisons in iteration no. 3 : 0
The list: 1 2 3 4
No. of true comparisons in iteration no. 4 : 0
The list: 1 2 3 4 5
No. of true comparisons in iteration no. 5 : 0
The list: 1 2 3 4 5 6
No. of true comparisons in iteration no. 6 : 0
The list: 1 2 3 4 5 6 7
No. of true comparisons in iteration no. 7 : 0
The list: 1 2 3 4 5 6 7 8
No. of true comparisons in iteration no. 8 : 0
The list: 1 2 3 4 5 6 7 8 9
sorted array:
1 2 3 4 5 6 7 8 9
Total no. of true comparisons : 0

the time used in insertion sorting is 0.002000


Selection sort:
No. of true comparisons in iteration no. 1 : 8
The list: 1 2 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 2 : 7
The list: 1 2 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 3 : 6
The list: 1 2 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 4 : 5
The list: 1 2 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 5 : 4
The list: 1 2 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 6 : 3
The list: 1 2 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 7 : 2
The list: 1 2 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 8 : 1
The list: 1 2 3 4 5 6 7 8 9
Sorted Array
1 2 3 4 5 6 7 8 9
Total no. of true comparisons : 36

the time used in Selection sorting is 0.007000

//Output 2
Enter the input size: 9
9
8
7
6
5
4
3
2
1

Insertion sort:
No. of true comparisons in iteration no. 1 : 1
The list: 8 9
No. of true comparisons in iteration no. 2 : 2
The list: 7 8 9
No. of true comparisons in iteration no. 3 : 3
The list: 6 7 8 9
No. of true comparisons in iteration no. 4 : 4
The list: 5 6 7 8 9
No. of true comparisons in iteration no. 5 : 5
The list: 4 5 6 7 8 9
No. of true comparisons in iteration no. 6 : 6
The list: 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 7 : 7
The list: 2 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 8 : 8
The list: 1 2 3 4 5 6 7 8 9
sorted array:
1 2 3 4 5 6 7 8 9
Total no. of true comparisons : 36

the time used in insertion sorting is 0.005000


Selection sort:
No. of true comparisons in iteration no. 1 : 0
The list: 1 8 7 6 5 4 3 2 9
No. of true comparisons in iteration no. 2 : 1
The list: 1 2 7 6 5 4 3 8 9
No. of true comparisons in iteration no. 3 : 2
The list: 1 2 3 6 5 4 7 8 9
No. of true comparisons in iteration no. 4 : 3
The list: 1 2 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 5 : 4
The list: 1 2 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 6 : 3
The list: 1 2 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 7 : 2
The list: 1 2 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 8 : 1
The list: 1 2 3 4 5 6 7 8 9
Sorted Array
1 2 3 4 5 6 7 8 9
Total no. of true comparisons : 16

the time used in Selection sorting is 0.007000

//Output 3
Enter the input size: 9
5
1
8
6
2
4
7
3
9

Insertion sort:
No. of true comparisons in iteration no. 1 : 1
The list: 1 5
No. of true comparisons in iteration no. 2 : 0
The list: 1 5 8
No. of true comparisons in iteration no. 3 : 1
The list: 1 5 6 8
No. of true comparisons in iteration no. 4 : 3
The list: 1 2 5 6 8
No. of true comparisons in iteration no. 5 : 3
The list: 1 2 4 5 6 8
No. of true comparisons in iteration no. 6 : 1
The list: 1 2 4 5 6 7 8
No. of true comparisons in iteration no. 7 : 5
The list: 1 2 3 4 5 6 7 8
No. of true comparisons in iteration no. 8 : 0
The list: 1 2 3 4 5 6 7 8 9
sorted array:
1 2 3 4 5 6 7 8 9
Total no. of true comparisons : 14

the time used in insertion sorting is 0.003200


Selection sort:
No. of true comparisons in iteration no. 1 : 2
The list: 5 1 8 6 2 4 7 3 9
No. of true comparisons in iteration no. 2 : 1
The list: 5 1 3 6 2 4 7 8 9
No. of true comparisons in iteration no. 3 : 2
The list: 5 1 3 6 2 4 7 8 9
No. of true comparisons in iteration no. 4 : 1
The list: 5 1 3 4 2 6 7 8 9
No. of true comparisons in iteration no. 5 : 0
The list: 2 1 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 6 : 2
The list: 2 1 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 7 : 1
The list: 2 1 3 4 5 6 7 8 9
No. of true comparisons in iteration no. 8 : 0
The list: 1 2 3 4 5 6 7 8 9
Sorted Array
1 2 3 4 5 6 7 8 9
Total no. of true comparisons : 9

the time used in Selection sorting is 0.011000
*/


