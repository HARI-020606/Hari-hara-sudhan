#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,sum=0,i,j;
     clrscr();
    printf("enter a decimal number:");
    scanf("%d",&n);
    j=1;
     for(i=n;i>0;i/=8){
         rem=i%8;
         sum=sum+(rem*j);
         j=j*10;
     }
     printf("%d",sum);
     getch();
     
}
