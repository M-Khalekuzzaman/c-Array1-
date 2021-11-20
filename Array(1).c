#include<stdio.h>
int main()
{
  //Array : An array is a collection of variables of same data types.
/*
Types of array:
1)One dimensional array or linear array
2)multi dimensional array >>> i)Two dimensional array or matrix array
                                                        ii) Three dimensional array
*/
int marks[100];
int number;
int sum = 0;
printf("Enter your array number : ");
scanf("%d",&number);
printf("Enter your 1st value :");
for(int i = 0 ; i<=number ;i++)
{
    scanf("%d",&marks[i]);
}

for(int j =0 ; j<=number ; j++)
{
    printf("%d\t",marks[j]);
    sum =  sum + marks[j];
}
printf("total sum is :  %d\n",sum);
printf("Average result is : %.2f\n",(float)sum/5);

    getch();


}

