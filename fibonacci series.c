#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,f,n,i;
    printf("enter a number:");
    scanf("%d",&n);
    printf("%d",a);
    for(i=1;i<=n;i++){
        f=a+b;
        a=b;
        b=f;
        printf("\n%d",f);
    }
    getch();
}
