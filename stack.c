//Stack program
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAXSIZE 5

struct stack
{
    int stk[MAXSIZE];
    int top;
};

typedef struct stack st;
st s;

/*Function to add an element to stack*/
void push()
{
    int num;
    if(s.top==(MAXSIZE-1))
    {
        printf("Stack is FUll\n");
        return;
    }
    else
    {
        printf("\n Enter element to be pushed:");
        scanf("%d", &num);
        s.top=s.top+1;
        s.stk[s.top]=num;
        
    }
    return;
}
    /*Function to delete an element from stack*/
    int pop()
    {
        int num;
        if(s.top==-1)
        {
            printf("Stack is Empty\n");
            return (s.top);
        }
        else
        {
            num=s.stk[s.top];
            printf("Popped element is = %d\n", s.stk[s.top]);
            s.top=s.top-1;
        }
        return (num);
    }
    /*Funtion to display the status of stack*/
    void display()
    {
        int i;
        if(s.top==-1)
        {
            printf("Stack is empty\n");
            return;
        }
        else
        {
            printf("\n Status of elements is  Stack:\n");
            for(i = s.top; i>=0; i--)
            {
                printf("%d\n", s.stk[i]);
            }
        }
    }

int main()
{
    int ch;
    s.top=-1;
    printf("\tStack Operations\n");
    printf("-----------------\n");
    printf(" 1. PUSH\n");
    printf(" 2.POP\n");
    printf(" 3.DISPLAY\n");
    printf(" 4.EXIT");
    printf("-----------------\n");

    while(1)
    {
        printf("\n Choose Operation:");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                push();
            break;
            case 2:
                pop();
            break;    
            case 3:
                display();
            break;
            case 4:
                exit(0);
            default:
            printf("Invalid Operation\n");

        }
    }
    return 0;
}
