#include <stdio.h>
int main()
{
    int m,n,a[40][50], i, j;
    printf("Enter the no. of students: ");
    scanf("%d", &m);
    printf("Enter the no. of subjects: ");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the marks for student %d sunject %d\n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The marks of student is:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}