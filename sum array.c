#include<stdio.h>
#include<conio.h>
void main()
{
    int i,marks[40][5],sum,n,j;
    printf("enter the no.of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<5;j++){
            printf("enter the marks:");
            scanf("%d",&marks[i][j]);
            sum=sum+marks[i][j];
        }
        printf("the sum of marks of student %d is:%d",i+1,sum);
        printf("\n");
    }
    getch();
    
}
