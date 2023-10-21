#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,j;
    puts("Enter string:");
    gets(str);
    for(i=0,j<=strlen(str)-1;i<j;i++,j--)
    {
        char temp;
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("string:%s",str);
}
