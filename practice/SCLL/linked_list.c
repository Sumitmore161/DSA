#include"C:\DSA_Lab\Lab_03\practice\algorithm.c"
x*solution(x*head)
{   
    int count=0;
    x*t = head;
    while (t!= NULL)
    {
        t= t->next;
        count++;
    }
    int n;
     scanf("%d",&n);
     int last = count - n - 1;
     t = head;
     if (n == count)
     {
        head = head->next;
        free(t);
        print_list(head);
     }
     else{
     while (last--)
     {
        t = t->next;
     }
     t->next = t->next->next;
     
     print_list(head);
     free(t->next);
     }
}

int main()
{
    x*head = create_linked_list(5);
    
    solution(head);
}