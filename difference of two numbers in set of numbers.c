#include<stdio.h>
#include<conio.h>
void main()
{
    int i,arr[7],max=0,min=9;
    clrscr();
    for(i=1;i<=7;i++){
        printf("enter the value:");
        scanf("%d",&arr[i]);
    }
    i=1;
    while(i<=7){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
           i++;
        
    }
    printf("the difference is :%d",max-min);
    getch();
    
}
