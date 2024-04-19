#include<stdio.h>
#define SIZE 6
int STACK[SIZE];
int Top=-1;
void push(int key)
{
    if(Top==SIZE-1)
    {
        return;
    }
    Top=Top+1;
    STACK[Top]=key;
}

int pop()
{
    int temp;
    if(Top==-1)
    {
        return 0;
    }
    temp=STACK[Top];
    Top=Top-1;
    return temp;
}

void main()
{
    printf("Push any element into the stack :");
    push(10);
    push(20);
    push(30);
    pop();
    push(10);
    push(20);
    pop();
    push(100);


    for (int i=0;i<SIZE;i++)
    {
        printf("%d ",STACK[i]);
    }
}