#include<conio.h>
void main()
{
    int i,n,min=32767,max=0;
      clrscr();
    printf("enter the number of elements:");
    scanf("%d",&n);
    int range[n];
    for(i=1;i<=n;i++){
        printf("enter the elements:");
        scanf("%d",&range[i]);
        if(range[i]>max){
            max=range[i];
        }
        if(range[i]<min){
            min=range[i];
        }
    }
    printf("the maximum value is:%d",max);
    printf("\nthe minimum value is:%d",min);
    getch();
}
