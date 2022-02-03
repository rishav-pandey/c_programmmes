//RISHAV PANDEY
//2105733
// input sentence and count number of vowels and consonents

#include<stdio.h>
#include<string.h>

int len(char *s){
    int i=0,count=0;
    while(*(s+i)!='\0'){
        count++;
        i++;
    }
    return count;
}


void main()
{
    char str[50];
    printf("\nEnter a string: ");
    gets(str);
    int vowel=0,conso=0;
    for (int i = 0; i < len(str); i++)
    {
        if(str[i]=='a' ||str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'||str[i]=='A' ||str[i]=='E'|| str[i]=='I' || str[i]=='O' || str[i]=='U')
            vowel++;
        else    
            conso++;
    }
    printf("\nNo. of vowels: %d No. of consonents: %d",vowel,conso);

}