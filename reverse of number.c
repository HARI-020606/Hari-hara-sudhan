#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,rev=0,num;
     clrscr();
    printf("enter the number:");
    scanf("%d",&n);
    num=n;
    do{
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }while(n>0);
        printf("the reverse of the number %d,%d",num,rev);
        getch();
    
    
}
