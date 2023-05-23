#include"algorithm.c"

int main()
{
    x* head1= create_linked_list(10);
    x*head2 = create_linked_list(5);
    x*res= NULL;
    x*l1 =head1,*l2= head2;
    // print_list(head1);
    // print_list(head1);
    // if (head1->data > head2->data)
    // {
    //     swap(&l1,&l2);
    // }
    // res = l1;
    // while (l1!= NULL && l2!= NULL)
    // {
    //     x*temp = NULL;
    //     while (l1!= NULL && l1->data <= l2->data)
    //     {
    //        temp = l1;
    //        l1 =l1->next; 
    //     }
    //     temp->next = l2;
    //     swap(&l1,&l2);
        
    // }
    res = merge_link(l1,l2);
    print_list(res);
    

    return 0;

}