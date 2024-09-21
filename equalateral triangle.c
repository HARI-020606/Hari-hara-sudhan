#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,j,r;
     clrscr();
    printf("enter the no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(r=1;r<=i;r++){
            printf("* ");
        }
        printf("\n");
    }
    getch();
}
