
#include<stdlib.h>
#include<stdio.h>
// #include <iostream>
#define loop(ii,n) for(int ii=0; ii < n ; ii++)
#define al(n) (x*)malloc(n*sizeof(x))
struct node
{
        int data; 
        struct node *next;
};
typedef struct node x;

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
            head ->next  = NULL;
            c = head;

        }
        else{
            t = al(1);
                //  scanf("%d",&t->data);
            t ->data = i + (i+ 1)*(i+2) - (i+3)*(i+4)/(100-i);
            t ->next = NULL;
            c ->next = t;
            c = t; 
        }
        
    }
    return head;
}
void print_list(x*head, int n)
{
    x *t= head;
    while ( t != NULL)
    {
      printf("%d\t",t->data);
      t = t->next;   
    }
}
static void reverse(x** head_ref)
{
	x* prev = NULL;
	x* current = *head_ref;
	x* next = NULL;
	while (current != NULL) {
		// Store next
		next = current->next;

		// Reverse current node's pointer
		current->next = prev;

		// Move pointers one position ahead.
		prev = current;
		current = next;
	}
	*head_ref = prev;
     printf("\n");
}

int main()
{
     
     x * head;
     head = create_linked_list(10);
        print_list(head,10);
         reverse(&head);
         print_list(head,10);

    return 0;
}