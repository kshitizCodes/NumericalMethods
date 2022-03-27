#include <stdio.h>
#include <math.h>
#define f(x) (pow(x, 3) - 4)
int main() {
    float a, b, x, err;
    int count = 1, n;
    printf("Enter the values of a and b: ");
    scanf("%f %f", &a, &b);
    printf("Enter the values of allowed error and max. no. of iterations: ");
    scanf("%f %d", &err, &n);
    printf("Iteration no \tx\n");
    do {
        if (f(a) == f(b)) {
            printf("Solution cannot be found as the values of a and b are same.");
            return 1;
        }
        x = (a * f(b) - b * f(a)) / (f(b) - f(a));
        a = b;
        b = x;
        printf("%d\t\t%f\n", count++, x);
    } while (fabs(f(x)) > err || count == n);
    printf("The requied root is %f", x);
}