#include<stdio.h>
#include<conio.h>
void main()
{
    int j,k,max,a,i;
    printf("enter a number:");
    scanf("%d",&j);
    printf("enter another number:");
    scanf("%d",&k);
    if(j<k){
        a=j;
    }else{
        a=k;
    }
    for(i=1;i<=a;i++){
        if(j%i==0){
            if(k%i==0){
                max=i;
            }
        }
    }
    printf("%d",max);
    getch();
}
