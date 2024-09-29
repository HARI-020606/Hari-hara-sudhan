#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,m,ele[5][5],diagsum;
    printf("enter the no.of rows:");
    scanf("%d",&m);
    printf("enter the no.of column:");
    scanf("%d",&n);
    if(m==n){
        diagsum=0;
        for(i=0;i<m||i<n;i++){
            for(j=0;j<m||j<n;j++){
                printf("enter the element:");
                scanf("%d",&ele[i][j]);
                if(i==j){
                    diagsum=diagsum+ele[i][j];
                }
            }
            printf("\n");
        }
    
    }
    printf("the sum of diagnol elements :%d",diagsum);
    getch();
}
