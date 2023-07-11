#include <stdio.h>

union MyUnion {
    int num1;
    float num2;
};

int main()
{
    union MyUnion UN;

    printf("Size of union: %ld", sizeof(UN));

    return 0;
}
