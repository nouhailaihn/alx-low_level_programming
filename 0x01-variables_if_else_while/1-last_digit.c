#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
    int n;
    srand(time(0));
    n = rand() % 200 - 100;  // generate a random number between -100 and 99
    int abs_n = abs(n);
    int last_digit = abs_n % 10;
    int sign = n >= 0 ? 1 : -1;
    printf("Last digit of %d is %d and is ", n, sign * last_digit);
    if (last_digit > 5) {
        printf("greater than 5\n");
    } else if (last_digit == 0) {
        printf("0\n");
    } else {
        printf("less than 6 and not 0\n");
    }
    return 0;
}

