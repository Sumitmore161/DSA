#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
     int **ptr = NULL;
     int m=5,n=4;
     ptr = (int**)malloc(m*sizeof(int*));
    int i,j;
    for ( i = 0; i < m; i++)
    {
        ptr[i] = (int*) malloc(n*sizeof(int));
    }
    
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            ptr[i][j] = i + 1;
             printf("\t %d", ptr[i][j]);
        }
         printf("\n");     
    }
    j= 0;
    int t = 0;
    for ( i = 0; i < m; i++)
    {   
        
        for ( j = 0; j < n; j++)
        {
           if(t < ptr[i][j])
           {
                t = ptr[i][j];
           } 
        }
        
    }
     printf("%d",t);
    return 0;
}