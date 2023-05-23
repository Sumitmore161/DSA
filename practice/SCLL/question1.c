#include <stdio.h>
#include <stdlib.h>
#define al(n) (x*) malloc(n*sizeof(x));
#define i(var)  scanf("%d",&var);
#define o(var)  printf("%d\t",var);
struct node{
   
    int data;
    struct node *next;
};
typedef struct node x;
void swap(int  *a,int *b)
{
        int temp  = *a;
        *a = *b;
        *b = temp;
}
int main()
{
    int d;
     x*tail = NULL,*c = NULL,*t = NULL;
        int n;
        i(n);
        int i=0;
        
        
        while (i < n)
        {
            if (tail == NULL)
            {
                tail = al(1);
                tail->next = tail;
                i(d);
                tail->data = d;    
                c= tail;
                //  printf("ok");
            }
            else{
                t = al(1);
                i(d);
                t->data = d;
                // c = tail;
                t->next = tail->next;
                tail->next = t;
                tail =t;

                //  printf("something");
            }
            
            i++;
        }
    c = tail->next;
   
//    do
//    {
//     printf("%d\t",c->data);
//          c = c->next;
//    } while (c != tail->next);
   
//     int pos1,pos2;
//     i(pos1)
//     i(pos2)
//     if(pos1 >  pos2){
//         int temp = pos1;
//         pos1 = pos2;
//             pos2 = pos1;
//     }
    
//     x*p1,*p2;
//     c = tail->next;
//     i = 1;
   
//        do
//    {
//     printf("%d\t",c->data);
//         if (pos1 == i)
//         {
//             p1 = c;
//         }
//         if(pos2 == i){
//             p2 = c;
//         }
//          c = c->next;
//          i++;
//    } while (c != tail->next);
//     // o(c->data)
//     swap(&p1->data,&p2->data);

//      do
//    {
//     printf("%d\t",c->data);
//          c = c->next;
//    } while (c != tail->next);
   t = tail->next;
   c = tail->next;
   i = 1;
   while(i--)
   {
    c=t;
    t = t->next;
   }
    c->next = t->next;
    t->next = NULL;
    i = n -2 -1 ;
    c = tail->next;
    
    while (i--)
    {
        
        c= c->next;
    }
     t->next = c->next;
    c->next = t;
    c= tail->next;
      do
   {
    printf("%d\t",c->data);
         c = c->next;
   } while (c != tail->next);
    return 0;
}