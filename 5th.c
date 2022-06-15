//FACT OF NUMBER
#include<stdio.h>
/*int findfact(int);
void main()
{
    int num,fact;
    printf("Enter till where:");
    scanf("%d",&num);
    fact=findfact(num);
    printf("Fact is :%d",fact);
}
int findfact(int n)
{
    if(n==0){
        return(1);
    }
    return (n*findfact(n-1));
}*/

//GCD
/*int gcd(int,int);
int main()
{
    int a=0,b=0;
    printf("Enter first element:");
    scanf("%d",&a);
    printf("Enter second element:");
    scanf("%d",&b);
    printf("GCD is:%d",gcd(a,b));
}
int gcd(int a,int b)
{
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>b){
        return gcd(a-b,b);
        
    }
    if(a<b){
        return gcd(a,b-a);
    }
    

}*/
void towerofH(int n,char from_rod,char to_rod,char aux_rod)
{
    if(n==1){
        printf("Move disk 1 from rod %c to rod %c",from_rod,to_rod);
        return;
    }
    towerofH(n-1,from_rod,to_rod,aux_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerofH(n - 1, aux_rod, to_rod, from_rod);
     
}
int main()
{
    int n=4;
    towerofH(n,'A','B','C');
    return 0;
}