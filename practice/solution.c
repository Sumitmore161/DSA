#include"algorithm.c"
x* solution(x*head)
{   x*t = head;
    x*prev=NULL;
    x*c=NULL;
    x*nex=NULL;
    x*lt = find_last(head);
    while (t->next != NULL)
    {
        if (t->next->data % 2 != 0)
        {
                prev = t,c = t->next,nex = t->next->next;
            // o(prev->data);
            // o(c->data);
            // o(nex->data);
            prev->next = nex;
            lt->next = c;
            c->next = NULL;
            lt = c;

        }
        t= t->next;
    }
    
        return head;
}
int main(int argc, char const *argv[])
{   int n =10;
    // x* head = create_linked_list(n);
    // print_list(head);
    // head = solution(head);
    x*tail = create_SCinked_list(),*t;
    t = tail->next;
    // o(t->data)
    // do
    // {
    //     o(t->data);
    //     t = t->next;
    // } while (t != tail->next);
    
    return 0;
}

