//-WAP to find average marks btained by a class of 20 students in a test and count no. of sudents score O grade and add no. of students fail. 

#include <stdio.h>
int main()
{
int i,sum,avg,count=0,fail=0,marks[20],student,subject;
printf("Enter the no of students:");
scanf("%d",&student);

printf("Enter no of subjects:");
scanf("%d",&subject);
for(i=0;i<student;i++)
{
    printf("Enter the marks for student %d",i+1);

for(i=0;i<subject;i++){
    printf("Enter the marks:");
    scanf("%d",&marks[i]);
}
}

for(i=0;i<student;i++)
{
    printf("Marks of student %d",i+1);
    for(i=0;i<subject;i++){
        printf("mark of subject %d",i+1);
        printf("%d",marks[i]);
}
}


for(i=0;i<subject;i++){
    
   
}
}

for(i=0;i<student;i++)
{
    printf("Marks of student %d",i+1);
    for(i=0;i<subject;i++){
        printf("mark of subject %d",i+1);
        printf("%d",marks[i]);
}
}


// for(i=0;i<20;i++){
//     sum=sum+marks[i];
//     if(marks[i]>89){
//         count++;
//     } else
//     fail++;
// }
// avg=sum/20;
// printf("\nAverage marks=%d",avg);
// printf("\nNumber of students secured O grade=%d",count);
// printf("\nNumber of students who failed=%d",fail);
return 0;
}