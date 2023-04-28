#include <stdio.h>
#include <stdlib.h>
struct node 
{
        int d;
        struct node*link;
};
typedef struct node N;
int main()
{
     int i = 0,n = 10;
     struct node *head = NULL,*t,*c;
     while(i < n)
     {
        if(head == NULL)
        {
            head = (N *)malloc(n*sizeof(N));
            head->d = 10 +i;
            head->link = NULL;
            c = head;
        }
        else
        {
            t = (N*)malloc(sizeof(N));
            t-> d = 10 +i;
            c->link = t;
            t->link=NULL;
            c= t;
        }
        i++;
     }
     t = head;
     while (t != NULL)
     {
         printf("\t %d",t -> d);
         t = t-> link;
     }
    

    return 0;
}