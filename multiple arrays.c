[ #include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("enter no.of elements for the arrays:");
    scanf("%d",&n);
    int arr1[n],arr2[n],sum[n],max[n],min[n];
    for(i=0;i<n;i++){
        printf("enter elements for first array:");
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++){
        printf("enter elements for second array:");
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++){
         sum[i]=arr1[i]+arr2[i];
         if(arr1[i]>arr2[i]){
             max[i]=arr1[i];
         }else{
             max[i]=arr2[i];
         }
         if(arr1[i]<arr2[i]){
             min[i]=arr1[i];
         }else{
             min[i]=arr2[i];
         }
    }  
    for(i=0;i<n;i++){
        printf("%d ",sum[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d ",max[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d ",min[i]);
    }
    getch();
}
