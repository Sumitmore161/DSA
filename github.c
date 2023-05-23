#include"C:\DSA_Lab\Lab_03\practice\algorithm.c"
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
int main()
    {
            x* head  = create_linked_list(10);
            print_list(head);
    }
