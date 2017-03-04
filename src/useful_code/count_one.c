#include <stdio.h>

/* count one in the integer x */
int count_one(int x)
{
    int count = 0;
    while (x != 0) {
        x &= (x-1);
        count++;
    }
    return count;
}

/* count zero in the integer x */
int count_zero(int x)
{
    int count = 0;
    while ((x+1) != 0) {
        x |= (x+1);
        count++;
    }
    return count;
}

int main()
{
    int x = -1;
    printf("count one = %d\n", count_one(x));
    printf("count zero = %d\n", count_zero(x));

    unsigned int x1 = x;
    printf("x1= %ud\n", x);
}
