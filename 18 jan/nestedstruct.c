//RISHAV PANDEY
//2105733
#include<stdio.h>
struct address
{
    char name[15];
    char city[30];
    int pin;
};
struct emp
{
    struct address a;
    char phone[10];
};
int main()
{
    struct emp e={"Rishav","Lucknow",46,"1144785234"};
    printf("name:%s\ncity:%s\nphone:%s\npin:%d\n",e.a.name,e.a.city,e.phone,e.a.pin);
}