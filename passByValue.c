#include <stdio.h>

void fun(int num)
{
    num = 20;
    printf("%p\n", &num);
}

int main()
{
    int x = 10;
    fun(x);
    printf("%p\n", &x);

    return 0;
}