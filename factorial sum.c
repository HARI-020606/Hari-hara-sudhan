#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,sum=0,fact,divi;
     clrscr();
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=1;
        for(j=1;j<=i;j++){
            fact=fact*j;
        }
        divi=i/fact;
        sum=sum+divi;
    }
    printf("%d",sum);
    getch();
}
