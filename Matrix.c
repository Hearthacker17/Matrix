#include<stdio.h>
int main()
{
int i,j;
int arr[3][3];
int (*ptr)[3];
ptr=arr;
printf("Input elements in the matrix :\n");
for(i=0;i<3;++i)
{
for(j=0;j<3;++j)
{
printf("element - [%d],[%d] : ",i,j);
scanf("%d",*(ptr+i)+j);
}
}
printf("\nThe matrix is :\n");
for(i=0;i<3;++i)
{
for(j=0;j<3;++j)
printf("%d ",*(*(ptr+i)+j));
printf("\n");
}
int sum=0;
for(i=0;i<3;++i)
for(j=0;j<3;++j)
{
if(i==j)
sum+=*(*(ptr+i)+j);
}
printf("The sum of diagonal elements is %d",sum);
}
