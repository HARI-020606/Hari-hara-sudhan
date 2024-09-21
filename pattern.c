#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,r;
    clrscr();
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            for(r=1;r<=3;r++){
                printf("\n%d%d%d",i,j,r);
            }
        }
    }
    getch();
}
