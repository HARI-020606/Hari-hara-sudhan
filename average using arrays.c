#include<stdio.h>
#include<conio.h>
void main()
{
    int i,avg,sum=0,marks[5];
    clrscr();
    for(i=1;i<=5;i++){
        printf("enter the marks:");
        scanf("%d",&marks[i]);
    }
    i=1;
    while(i<=5){
        sum=sum+marks[i];
        i++;
    }
    avg=sum/5;
    printf("the average of marks:%d",avg);
    getch();
}
