#include <stdio.h>
#include <stdlib.h>
void merge(int a[], int lb1, int ub1, int ub2)
{
    int n1 = ub1 - lb1 + 1;
    int n2 = ub2 - ub1;
    int b[n1], c[n2], i, j, k;
    for (int i = 0; i < n1; i++)
    {
        b[i] = a[lb1 + i];
    }
    for (int j = 0; j < n2; j++)
    {
        c[j] = a[ub1 + 1 + j];
    }

    i = 0;
    j = 0;
    k = lb1;
    while (i < n1 && j < n2)
    {
        if (b[i] <= c[j])
        {
            a[k] = b[i];
            i++;
        }
        else
        {
            a[k] = c[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = b[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        a[k] = c[j];
        k++;
        j++;
    }
}
void merge_sort(int a[], int lb, int ub)
{
    int mid = lb + (ub - lb) / 2;
    if (lb < ub)
    {
        merge_sort(a, lb, mid);
        merge_sort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}
void output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
 
int main()
{
     int *ptr,n=9;
     ptr = (int*) malloc(n*sizeof(int));
     for (int i = 0; i < n; i++)
     {
         scanf("%d",(ptr + i));
     }
     merge_sort(ptr,0,n-1);
     output(ptr,n);
    //  for (int i = 0; i < n; i++)
    //  {
    //      printf("\t %d",*(int*)(ptr + i));
    //  }
     
     
    return 0;
}