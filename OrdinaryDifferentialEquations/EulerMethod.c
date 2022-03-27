#include <stdio.h>
#define f(x, y) (x + y)
int main() {
    float a, b, x, y, h, t, k;
    printf("Enter x0, y0, h, xN: ");
    scanf("%f %f %f %f", &a, &b, &h, &t);
    x = a; y = b;
    printf("x\ty\n");
    while (x <= t) {
        k = h * f(x, y);
        y += k;
        x += h;
        printf("%0.3f\t%0.3f\n", x, y);
    }
}