#include <stdio.h>

void fun(char stringArray[])
{
    stringArray[1] = 'A';
    printf("%s\n", stringArray);
}

int main()
{
    char stringArray[10];
    scanf("%s", stringArray);

    fun(stringArray);

    printf("%s", stringArray);
    return 0;
}