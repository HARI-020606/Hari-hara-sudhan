#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,m,j,ele[5][5],rowsum,colsum,totsum;
    printf("enter the no.of rows:");
    scanf("%d",&m);
    printf("enter the no.of columns:");
    scanf("%d",&n);
    for(i=0;i<m;i++){
        rowsum=0;
        for(j=0;j<n;j++){
            printf("enter the elemnts:");
            scanf("%d",&ele[i][j]);
            rowsum=rowsum+ele[i][j];
        }
        printf("\nthe sum of elements of row %d is:%d",i+1,rowsum);
        printf("\n");
    }
    for(j=0;j<n;j++){
        colsum=0;
        for(i=0;i<m;i++){
            colsum=colsum+ele[i][j];
        }
        printf("the sum of column %d is:%d",j+1,colsum);
        totsum=totsum+colsum;
        printf("\n");
    }
    printf("the total sum of elements of matrix is:%d",totsum);
    getch();
}
