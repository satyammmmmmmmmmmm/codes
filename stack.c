/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define max 10
int stack[max];
int top=-1;
//add element into stack
void push(int val){
    if(top==max-1){
        printf("Stack overflow");
        return;
    }
    stack[++top]=val;
    printf("value added");
}
void pop()
{
    if(top==-1){
        printf("stack empty");
        return;
    }
    printf("removed %d",stack[top]);
    top--;
}
void display(){
    if(top==-1)
    {
        printf("Stack is empty");
    }
    printf("\n");
    for(int i = top; i>=0;i--){
        printf("%d -> ",stack[i]);
    }
}
int main()
{
   push(10);
   push(20);
   push(30);
   display();

    return 0;
}