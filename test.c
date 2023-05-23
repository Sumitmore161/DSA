// #include <bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>
// #include <iostream>
#define loop(ii,n) for(int ii=0; ii < n ; ii++)
#define al(n) (x*)malloc(n*sizeof(x))
// #define cin<<(a)scanf("%d",&a);
// using namespace std;
struct node {
    int data;
    struct node * link;
};
struct node typedef x;
x* create_linked_list( int n)
{
    x *head = NULL,*t = NULL,*c = NULL;
    // head->data = 45;
    // int x;
    loop(i,n){
        if (head == NULL)
        {
            head = (x*) malloc(sizeof(x));
            head ->data = i + (i+ 1)*(i+2) - (i+3)*(i+4)/(100-i);
            //  scanf("%d",&head->data);
            // cin<<(head->data);
            head ->link  = NULL;
            c = head;

        }
        else{
            t = al(1);
                //  scanf("%d",&t->data);
            t ->data = i + (i+ 1)*(i+2) - (i+3)*(i+4)/(100-i);
            t ->link = NULL;
            c ->link = t;
            c = t; 
        }
        
    }
    return head;
}
void print_linked_list( x* head){
    x *t =  head;
    while (t!= NULL)
    {
         printf("%d\n",t->data);
        t = t->link;
    }
     printf("\n");

}
x* reverse_linked_list(x * head)
{
    x *curr = head,*prev = NULL,*next = NULL;
    while ( curr != NULL)
    {   
        next = curr->link;//saves the the address of next element to the curr in list 
        curr->link = prev;//links the curr to the previous element 
        prev = curr;//updates the prev pointer to the current position for next iteration
        curr = next;// updates the curr pointer to the next element for next iteration
    }
    
    
    head = curr;
    return head;
    
    
}
x * search_element(x* head,int key)
{
    x* t =head;
    if ( head ==NULL)
    {
        printf("The linked list is empty\n");
        
        return NULL;
    }
    
    while (t!= NULL)
    {
        if (key == t ->data)
        {
            return t;
            break;
        }
        
    }
    
}
int main()
{
    int ptr;
    // ptr = (int *) calloc(10,sizeof(int));   
    x* head =  create_linked_list(5);
        // print_linked_list(head);

      head = reverse_linked_list(head);
        print_linked_list(head);
    //   x* t =  search_element(head,6);
    //  printf("%p",t);
    return 0;
}