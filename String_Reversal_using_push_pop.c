//Pratyay_Singha_Roy07
//String Reversal Using Push Pop
#include<stdio.h>
#include<string.h>
#define MAX 10
char stack[MAX];
int top=-1;
void push(int x)
{
	stack[++top] = x;
}
char pop()
{
    return stack[top--];
}
int main()
{
    char str[50];
    int i;
    printf("Enter the string :\n");
    gets(str);
    for ( i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }
    for ( i = 0; str[i] != '\0'; i++)
    {
        str[i]=pop();
    }
    str[i]='\0';
    printf("The reverse string is :\n");
    puts(str);
    return 0;
}
