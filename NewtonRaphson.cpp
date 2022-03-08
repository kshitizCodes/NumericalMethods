#include <stdio.h>
#include <math.h>
#define f(x) (sin(x) - x * x)
#define g(x) (cos(x) - 2 * x)
int main() {
    int max;
    float h, x0, x1, err;
    printf("Enter x0, allowed error and max. iterations: ");
    scanf("%f %f %d", &x0, &err, &max);
    for (int i = 0; i < max; ++i) {
        h = f(x0) / g(x0);
        x1 = x0 - h;
        printf("At iteration no %d, x = %9.6f\n", i+1, x1);
        if (fabs(h) < err) {
            printf("After %d iterations, root = %.6f\n", i+1, x1);
            return 0;
        }
        x0 = x1;
    }
    printf("The required solution does not converge or iterations are not enough.");
    return 1;
}