#include<stdio.h>
#include<math.h>
int main()
{
    int a[2][2]={NULL},b[2][2]={NULL},n=0,sum1=0,sum2=0,norm1=0,norm2=0;
    printf("1.Please enter the two,two dimensional arrays\n");
    printf("Enter the first two dimensional matrix:");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 2nd 2D matrix");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("2.Decide whether you want to calculate the transpose or normal of given matrices:");
    scanf("%d",&n);
    if(n==1){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                b[i][j]=a[j][i];
            }
        }
    
        printf("The transposed matrices are:");
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("%d\t",a[i][j]);
                printf("%d\t",b[i][j]);
            }
        }
    }
    else
    {

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++){
                sum1=sum1+a[i][j];
                sum2=sum2+b[i][j];
            }

        }
        norm1=sqrt(sum1);
        norm2=sqrt(sum2);
        printf("The normal of the two given matrices are norm1 and norm 2 respectively: %d\t %d\n",norm1,norm2);
    }

}