#include <stdio.h>
int main()
{
int marks[5];
int i;
printf("Enter marks of students \n");
for(i=0;i<5;i++)
{
scanf("%d",&marks[i]);
}
printf("Marks are \n");
for(i=0;i<5;i++)
{
printf("%d\n",marks[i]);
}
return 0;
}
