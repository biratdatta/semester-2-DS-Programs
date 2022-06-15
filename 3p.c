/*Design and Implement following Program to demonstrate the pointer concepts:
a. The use of pointer operators and expressions.
b. To swap two numbers using functions.
c. Different memory allocation functions.*/

#include<stdio.h>
#include<stdlib.h>
//increment pointer
/*void main()
{
    int a[3]={1,2,3};
    int b,*ap,i;
    ap=a;
    for(i=0;i<3;i++){
        printf("Address of pointer is:%d\n",ap);
        printf("Value of pointer is:%d\n",*ap);
        ap++;
    }
}*/
//decrement pointer
/*void main()
{
    int a[3]={1,2,3};
    int b,*ap,i;
    ap=&a[2];
    for(i=3;i>0;i--){
        printf("Address of pointer is:%d\n",ap);
        printf("Value of pointer is:%d\n",*ap);
        ap--;
    }
}
*/
//arithmetic pointers
/*void main()
{
    int a=20,b=10;
    int add,sub,mul,mod,div;
    int *ptr_a,*ptr_b;
    ptr_a=&a;
    ptr_b=&b;
    add=*ptr_a+*ptr_b;
    sub=*ptr_a-*ptr_b;

}*/
//SWAP 2 NOS USING FUNCTION
/*void main()
{
    int swap(int a,int b);
    int a=5,b=10;
    printf("Before swap a:%d b:%d\n",a,b);
    swap(a,b);
    printf("After swap a:%d b:%d",a,b);
}
int swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    return(a,b);
}*/
void swap(int,int);
int main( )
{
    int a=5, b=9;
    printf("Before swapping, the value of a and b is: %d %d\n", a, b);
    swap(a,b);
    printf("After swapping, the value of a and b is: %d %d", a, b);
    return 0;
}
void swap(int a ,int b)
{
    int t;
    t = a;
    a = b;
    b = t;  
}
/*void main()
{
    int n,i,*ptr,sum=0;
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory not allocated");
    }
    printf("Enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&ptr+i);
        sum+=*(ptr+i);
    } */