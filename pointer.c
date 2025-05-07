#include <stdio.h>

int main()
{
    int x = 10;
    // printf("%p", &x);

    int *ptr;
    ptr = &x;
    printf("%p\n", ptr);
    printf("%p", &ptr);

    return 0;
}