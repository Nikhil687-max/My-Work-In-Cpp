//creating stack using array\\.
//unknown error at run time that is when entering input stack overflow massage dont come 
//clicking run buttonn it shows
#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *A;
};

void create(Stack *sample1)
{


    cout << "enter the size: ";
    cin >> sample1->size;
    sample1->top = -1;
    sample1->A = new int[sample1->size];

}


void Display(Stack *sample1)
{

    cout << "Current Stack is: ";
    for(int i = 0;i <= sample1->top;i++){
        cout << sample1->A[i] << " ";
    }
    cout << "\n";
}

void push(Stack *sample1,int x)
{

    if(sample1->size <= (sample1->top)-1)
    {
        cout << "Last call is cancled due to, \nStack OverFlow\n";
    }
    else
    {
        (sample1->top)++;
        sample1->A[sample1->top] = x;
    }
    Display(sample1);
}

void pop(Stack *sample1)
{
    int x = -1;
    if(sample1->top == -1)
    {
        cout << "Last call is cancled due to, \nStack UnderFlow\n";
    }
    else
    {
        x = sample1->A[sample1->top];
        sample1->top--;
        
        Display(sample1);
    }
    

}



int main ()
{


    struct Stack S;
    create(&S);
    push(&S,3);
    push(&S,4);
    pop(&S);

}
