/*

    .  /   /
    __/___/__     -LINKED LISTS-
    ./   /        --------------
  __/___/__       ________________________
   /   /         /---Through To Through--/
  /   /         /-----------------------/

*/
#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node * next;

}*Head = NULL;

void create(int A[],int n)
{

    struct Node *t,*last;
    Head = new Node;
    Head->data = A[0];
    Head->next = 0;
    last = Head;

    for(int i = 1;i < n;i++)
    {

        t = new Node;
        t->data = A[i];
        t->next = 0;
        last->next = t;
        last = t;
        
    }

}

void Display(struct Node *s){
    while(s != 0)
    {
        cout << s->data << " ";
        s = s->next;
    }
    cout << "\n";
}

//push
void push(Node *s,int x)
{
    Node * t, * last, *k;
    t = new Node;
    k = s;
    while(last->next){
        last = k->next;
        k = last;
    }
    last->next = t;
    t->data = x;
    t->next = NULL;
    Display(Head);
}

//pop
void pop(Node * s)
{
    Node *t, *last, *k;
    t = new Node;
    last = s;
    while(last->next->next){
        last = last->next;
    }
    k = last;
    delete k;
    last = NULL;
    Display(Head);

}


//insert

void insert(Node * s, int /*0 based */index, int x)
{

    Node *t, *k, *last;
    k = s;
    t = new Node;
    t->data = x;
    k = s;
    if(index == 0){
        t->data = x;
        t->next = Head;
        Display(t);
    }
    else if(index == 1){
        last = Head->next;
        Head->next = t;
        t->data = x;
        t->next = last;
        Display(Head);
    }
    else{
        for(int i = 1;i < index;i++)
        {
            k = k->next;
        }
        last = k->next;
        k->next = t;
        t->next = last;
        Display(Head);
    }

}


//delete
void Delete(Node *s,int /*0 based*/index)
{

    Node *t, *k, *last;
    k = s;
    if(index == 0){
        Head = Head->next;
    }
    else{
        while (--index)
        {
            k = k->next;
        }
        last  = k->next;
        delete last;
        last->next = NULL;
        k->next = k->next->next;
    }
    Display(Head);

}




//isempty
bool isEmpty(Node * s)
{
    return (Head == NULL);
}

//search x
bool isPresent(Node * s,int target)
{
    while(s != 0)
    {
        if(s->data == target)return 1;
        s = s->next;
    }
    return 0;
}


int main ()
{
    int A[5] = {2, 3, 4, 5, 6};
    create(A, 5);
    int B[ ] = {3, 4, 5, 6, 7};
    create(B, 5);
    Display(Head);

    push(Head,5);
    push(Head,8);
    pop(Head);
    insert(Head, 0, 7);
    insert(Head, 6, 7);
    Delete(Head, 4);
    isEmpty(Head);
    isPresent(Head,5);

    Display(Head);

}