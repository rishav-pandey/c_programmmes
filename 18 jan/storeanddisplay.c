#include <stdio.h>
struct details
{
    char ri_name[50];
    int ri_age;
    char ri_sex;
    int ri_dob;
};

int main()
{
    int ri_i, a, b;
    struct details d[6];
    for (int ri_i = 0; ri_i < 6; ri_i++)
    {

        printf("enter the age\n");
        scanf("%d", &d[ri_i].ri_age);
        scanf("%c", &b);
        printf("enter the name \n");
        scanf("%s", d[ri_i].ri_name);
        scanf("%c", &b);
        printf("enter the sex\n");
        scanf("%c", &a);
        scanf("%c", &d[ri_i].ri_sex);
        printf("enter the date of birth\n");
        scanf("%c", &b);
        scanf("%d", &d[ri_i].ri_dob);
        scanf("%c", &b);
    }
    for (ri_i = 0; ri_i < 6; ri_i++)
    {
        if (d[ri_i].ri_sex == 'F')
        {