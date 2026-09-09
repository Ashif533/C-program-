#include <stdio.h>

/* 1. No Argument, No Return */
void NANR()
{
    printf("Hello from NANR\n");
}

/* 2. Argument, No Return */
void ANR(int a, int b)
{
    printf("Sum = %d\n", a + b);
}

/* 3. No Argument, With Return */
int NAWR()
{
    int a = 10, b = 20;
    return a + b;
}

/* 4. Argument, With Return */
int AWR(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    NANR();

    ANR(10, 20);

    result = NAWR();
    printf("NAWR Sum = %d\n", result);

    result = AWR(30, 40);
    printf("AWR Sum = %d\n", result);

    return 0;
}
