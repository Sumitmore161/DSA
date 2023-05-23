
#include<stdlib.h>
#include<stdio.h>
// #include <iostream>
#define loop(ii,n) for(int ii=0; ii < n ; ii++)
#define loop_start(ii,start,n) for(int ii=start; ii < n ; ii++)
#define al(n) (x*)malloc(n*sizeof(x))
#define in(var)  scanf("%d",&var);
#define o(var)   printf("%d\t",var);
struct node
{
        int data; 
        struct node *next;
};
typedef struct node x;

void swap(x**ptr1, x**ptr2)
{
    x *te = *ptr1;
     *ptr1 = *ptr2;
     *ptr2 = te;

}

x* create_linked_list( int n)
{
    x *head = NULL,*t = NULL,*c = NULL;
    // head->data = 45;
    // int x;
    loop(i,n){
        if (head == NULL)
        {
            head = (x*) malloc(sizeof(x));
            // head ->data = i + (i+ 1)*(i+2) - (i+3)*(i+4)/(100-i);
             in(head->data);
            // cin<<(head->data);
            head ->next  = NULL;
            c = head;

        }
        else{
            t = al(1);
                 scanf("%d",&t->data);
            // t ->data = i + (i+ 1)*(i+2) - (i+3)*(i+4)/(100-i);
            t ->next = NULL;
            c ->next = t;
            c = t; 
        }
        
    }
    return head;
}
void print_list(x*head)
{
    x *t= head;
    while ( t != NULL)
    {
      printf("%d\t",t->data);
      t = t->next;   
    }
     printf("\n");
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
x* insert_linked_list(x*head,int pos,int data)
{
        x*t = head,*p=NULL;
        if(head == NULL)
        {
             printf("Linked list is Empty\n");

        }
        else if(head->next == NULL)
        {
            p = al(1);
            p->data = data;
            p->next =head ->next;
            head = p;
            return head;
            
        }
        loop(i,pos-1){

        }

}
x* merge_link( x* l1,x*l2)
{
    x*res;
    if (l1->data > l2->data)
    {
        swap(&l1,&l2);
    }
    res = l1;
    while (l1!= NULL && l2!= NULL)
    {
        x*temp = NULL;
        while (l1!= NULL && l1->data <= l2->data)
        {
           temp = l1;
           l1 =l1->next; 
        }
        temp->next = l2;
        swap(&l1,&l2);
        
    }
    return res;
}
void merge(int a[],int lb1,int ub1,int ub2)
{
    int n1 = ub1 - lb1 +1;
        int n2 = ub2 - ub1;
        int b[n1],c[n2];
        int i,j,k;
        for ( i = 0; i < n1; i++)
        {
            b[i] = a[lb1 + i];
        }
        
        for ( j = 0; j < n2; j++)
        {
            c[j] =  a[ub1 + 1 + j];
        }
        i= 0;
        j = 0;
        k = lb1;

        while (i < n1 && j < n2)
        {
            if (b[i] <= c[j] )
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
void merge_sort(int a[],int lb, int ub)
{
    int mid = lb + (ub - lb )/2;
    if (lb < ub)
    {
    merge_sort(a,lb,mid);
    merge_sort(a,mid + 1,ub);  
      merge(a, lb, mid, ub);
    }
    
    
}
void swap1(int *a,int *b)
{
    int temp = *a;\
    *a = *b;
    *b = temp;

}
int partition(int a[],int lb,int ub)
{
      int i = lb-1;
      int j = 0;
      int pivot = a[ub];
      for ( j = 0; j < ub; j++)
      {
            if (a[j] <=pivot)
            {
            i++;
                swap1(&a[j],&a[i]);
                
            }

      }
            swap1(&a[i+1],&a[j]);
            return (i+1);

      
}
void quick_sort(int a[],int lb,int ub)
{
    int pivot = partition(a,lb,ub);
    if(lb < ub)
    {
        quick_sort(a,lb,pivot-1);
        quick_sort(a,pivot + 1,ub);
    }
}
x* find_last(x*head)
{
    while (head->next!= NULL)
    {
        head = head->next;
    }
    return head;
}
x* create_SCinked_list()
{
      int d;
     x*tail = NULL,*c = NULL,*t = NULL;
        int n;
        in(n);
        int i=0;
        
        
        while (i < n)
        {
            if (tail == NULL)
            {
                tail = al(1);
                tail->next = tail;
                in(d);
                tail->data = d;    
                c= tail;
                //  printf("ok");
            }
            else{
                t = al(1);
                in(d);
                t->data = d;
                // c = tail;
                t->next = tail->next;
                tail->next = t;
                tail =t;

                //  printf("something");
            }
            
            i= i +1;
        }
    c = tail->next;
    return tail;
}