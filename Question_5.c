#include <stdio.h>
#include <stdlib.h>
#include<math.h>

struct node
{
    int d;
    struct node *link;
};
typedef struct node x;

x* newnode(int data)
{
    x*t = (x*) malloc(sizeof(x));
    t->d = data ;
    t->link=NULL;
    return t;
}

x*insert_at_end(x*head,int data)
{
    if(head == NULL)
    {
        return newnode(data);
    }
    else
    {
        head->link=insert_at_end(head->link,data);
        return head;
    }
    
}
void traverse(x *head)
{
    if (head == NULL)
    {
        return;
    }
     printf(" \t %d",head->d);
    traverse(head->link);
    
}
x* bubble_sort(x*head)
{   
    x*t = head;
    while (t != NULL)
    {
        
    }
    
}
int main()
{
     int i=0,n =10,count =0;
     x *head = NULL,*t,*c;
     while (i < n)
     {
        if(head == NULL)
        {
            head = (x*) malloc(sizeof(x));
            head->d =54 - i +2*(i-3) + 67*(i+1)*sin(78*i)*cos(79*i) +(i+2)/log(i+2);
            head->link = NULL;
            c = head;   
        }
        else{
            t = (x*)malloc(sizeof(x));
            t->d=54 - i*(5-i) +2*(i-3);
            t->link = NULL;
            c ->link = t;
            c = t;
        }
        i++;
     }
       t = head;
         printf("The linked list is ");

     while (t != NULL)
     {
         printf("\t %d",t -> d);
         t = t-> link;
         count++;
     }
       printf("\n");
      
      t = head;
      int max= head->d,min = head->d;

     while (t != NULL)
     {
         if (max < t->d)
         {
            max = t->d;
         }
         if(min > t->d)
         {
            min = t->d;
         }
         t = t-> link;
     }

      printf("\tMAX: %d \tMIN : %d \tNO. OF NODE : %d \n",max,min,count);
    // x* head = NULL;
    head= insert_at_end(head,7);
    head= insert_at_end(head,-5);
    head= insert_at_end(head,89);
    head= insert_at_end(head,67);
    head= insert_at_end(head,34);
    head= insert_at_end(head,23);
    head= insert_at_end(head,2);
    // traverse(head);
       t = head;
         printf("The linked list is ");

     while (t != NULL)
     {
         printf("\t %d",t -> d);
         t = t-> link;
         count++;
     }
       printf("\n");
    return 0;
}