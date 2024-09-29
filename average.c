#include<stdio.h>
#include<conio.h>
void main()
{
    int i,marks[40][5],sum,n,j,avg,max=0,min=500;
    printf("enter the no.of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<5;j++){
            printf("enter the marks:");
            scanf("%d",&marks[i][j]);
            sum=sum+marks[i][j];
        }
        if(sum>max){
            max=sum;
        }
        if(sum<min){
            min=sum;
        }
        avg=sum/5;
        printf("the average of student %d is:%d",i+1,avg);
        printf("\n");
    }
    printf("\nthe maximum marks is:%d",max);
    printf("\nthe minimum mark is:%d",min);
    getch();
}
