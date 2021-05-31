#include<stdio.h>
int main()
{
    int num, revnum, digit, process;
    num = 348970;
    revnum = 0;
    if( num % 10 != 0)
    {
    process = num;
    while(process)
    {
    digit = process % 10;
    revnum = revnum * 10 + digit;
    process /= 10;
    }
    printf("%d reversed becomes %d", num, revnum);
    }
    else 
    {
    printf("As it has trailing zeros, cannot be reversed");
    }
    return 0;
}
