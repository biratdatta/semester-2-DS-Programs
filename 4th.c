#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("\nEnter size of STACK, MAX=100");
    scanf("%d",&n);
    printf("\n\tSTACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------");
    printf("\n\n1.Push\n2.POP\n3.Display\n4.EXIT");
    do
    {
        printf("\nEnter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
            push();
            break;
            }
            case 2:
            {
            pop();
            break;
            }
            case 3:
            {
                display();
            }
            case 4:
            {
            printf("\nExit Point");
            break;
            }
            default:
            {
                printf("\nPlease enter valid choice");

            }
        }

    }
    while(choice!=4);
    return 0;
          
}
void push()
{
    if(top>=n-1)
    {
        printf("\nSTACK is overflow");
    }
    else{
        printf("Enter a value to be pushed");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=1)
    {
        printf("\nStack is under flow");
    }
    else{
        printf("\nThe popped element is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\nThe Elements in STACK \n");
        for(i=top;i>=0;i--)
        {
            printf("\n%d",stack[i]);
        }
        printf("\nPress next choice");
    }
    else
    {
        printf("\nThe STACK is empty");
    }
}