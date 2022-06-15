#include<stdio.h>
#include<stdlib.h>
struct node1
{
    int data;
    stuct node*next;
};
struct node*head;
void deginsert();
void lastinster();
void randominster();
void begin_delete ();
void last_delet();
void random_delete();
void display();
void search();
int main()
{
    int choise=0;
    while(choice !=9)
    {
        printf("\n\n*****main menu****\n")
        printf("\n choose one option from the flowing list..\n")
        printf("\n========\n")
        printf("\n 1.insert in the begining\n 2.insert at last\n 3.insert art any random location\n 4. delete from beginning\n 5.delet from last\n 6. delete node after specified location\n 7.search for an element\n8.show\n 9.exit\n");
        printf("\n enter your choice?\n");
        scanf_s("\n%d",&choice);
        switch(choice)
        {
            case 1:
            beginster();
            break
            case 2:
            lastinstert();
            break;
            case 3:
            randominsert();
            break;
            case 4:
            begin_delete();
            break;
            case 5:
            last_delete();
            break;
            case 6:
            random_delete;
            break;
            case 7:
            search();
            break;
            case 8:
            display();
            break;
            case 9:
            exit(0);
            break;
            default:
            printf("please enter valid choice..");


        }
    }
    return 0;
}
void beginsert()
{
    struct node*ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL)
    {
        printf("\nOVERFLOW")
    }
    else
    {
        printf("\n enter value\n");
        scanf_s("%d",&item);
        ptr->data = item;
        ptr->next=head;
        head=ptr;
        printf("\n node inserted");
    }
}
void lastinsert()
{
    struct node*ptr,*temp;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if (ptr==NULL)
    {
        printf("\noverflow")
    }
    else
    {
        printf("\n enter value?\n");
        scanf("%d",&item);
        ptr->data=item;
        if(head==null)
        {
          ptr-> next=NULL;
            head=ptr;
            printf("\noverflow");
        }
        else
        {
        temp=head;
        while(temp->next !=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=NULL;
        printf("\n node inserted");

    }
}