#include<stdio.h>
#define MAX 5
int cq_arr[MAX];
int front=-1;
int rear=-1;
void insert(int item){
    if((front==0 && rear==MAX-1)|| (front==rear+1)){
        printf("Q overflow\n");
        return;
    }
    if(front==-1){
        front=0;
        rear=0;
    }
    else{
        if(rear==MAX-1){
            rear=0;
        }
        else{
            rear=rear+1;
        }

    }
    cq_arr[rear]=item;
}
void deletion(){
    if(front==-1){
        printf("Q underflow");
        return;
    }
    printf("Element deleted from q is:%d\n",cq_arr[front]);
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        if(front==MAX-1){
            front=0;
        }
        else{
            front=front+1;
        }
    }
}
void display(){
    int front_pos=front,rear_pos=rear;
    if(front==-1){
        printf("Q is empty\n");
        return;
    }
    printf("Q elements\n");
    if(front_pos<=rear_pos){
        while(front_pos<=rear_pos){
            printf("%d",cq_arr[front_pos]);
            front_pos++;
        }
    }
    else{
        while(front_pos<=MAX-1){
            printf("%d",cq_arr[front_pos]);
            front_pos++;
        }
        front_pos=0;
        while(front_pos<=rear_pos){
            printf("%d",cq_arr[front_pos]);
            front_pos++;
        }

    }
    printf("\n");

}
int main()
{
    int choice,item;
    do{
        printf("1.Insert\n2.Delete\n3.Display\n4.Quit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Input element for insertion in q:");
            scanf("%d",&item);
            insert(item);
            break;
            case 2:
            deletion();
            break;
            case 3:
            display();
            break;
            case 4:
            break;
            default:
            printf("Wrong choice");


        }
    }while(choice!=4);
    return 0;
}