//-WAP to find average marks btained by a class of 20 students in a test and count no. of sudents score O grade and add no. of students fail. 

#include <stdio.h>
int main ()
{
int i,sum,avg,count=0,fail=0,marks[20];
for(i=0;i<20;i++){
    printf("Enter the marks:");
    scanf("%d",&marks[i]);
}
for(i=0;i<20;i++){
    sum=sum+marks[i];
    if(marks[i]>89){
        count++;
    } else
    fail++;
}
avg=sum/20;
printf("\nAverage marks=%d",avg);
printf("\nNumber of students secured O grade=%d",count);
printf("\nNumber of students who failed=%d",fail);
return 0;
}