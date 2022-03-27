#include <stdio.h>
#define f(x, y) ((x - y) / (x + y));
int main() {
    float x, y, x0, y0, m, m1, m2, m3, m4, xN, h;
    printf("Enter x0, y0, xN, h: ");
    scanf("%f %f %f %f", &x0, &y0, &xN, &h);
    x = x0;
    y = y0;
    printf("x\t\ty\n");
    while (x < xN) {
        m1 = f(x0, y0);
        m2 = f(x0 + h / 2, y0 + m1 * h / 2);
        m3 = f(x0 + h / 2, y0 + m2 * h / 2);
        m4 = f(x0 + h, y0 + m3 * h);
        m = (m1 + m4 + 2 * (m2 + m3)) / 6;
        y += m * h;
        x += h;
        printf("%.4f\t%.4f\n", x, y);
    }
}