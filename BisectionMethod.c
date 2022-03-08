#include <stdio.h>
#include <math.h>
#define f(x) (x * x - 3 * x - 2)
void bisection(float *x, float a, float b, int *itr) {
    *x = (a + b) / 2;
    ++(*itr);
    printf("Iteraation no %d  X = %7.5f\n", *itr, *x);
}
int main() {
    int itr = 0, max;
    float x, a, b, err, x1;
    printf("Enter the values of a, b, allowed error and maximum iterations: ");
    scanf("%f %f %f %d", &a, &b, &err, &max);
    bisection(&x, a, b, &itr);
    do {
        if (f(a) * f(x) < 0)
            b = x;
        else
            a = x;
        bisection(&x1, a, b, &itr);
        if (fabs(x1 - x) < err)
        {
            printf("After %d iterations root = %6.5f\n", itr, x1);
            return 0;
        }
        x = x1;
    } while (itr < max);
    printf("The solution does not converge or iterations are not sufficient.");
    return 1;
}