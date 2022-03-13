#include <stdio.h>
#define f(x) (1 / (1 + x*x))
int main() {
    int i, n;
    float x0, xN, h, y[20], ans, x[20], sO = 0, sE = 0;
    printf("Enter values of x0, xN, h: ");
    scanf("%f %f %f", &x0, &xN, &h);
    n = (xN - x0) / h;
    if (n % 2 == 1) n++;
    h = (xN - x0) / n;
    printf("Refined values of n and h are: %d %.4f.\n", n, h);
    printf("Y values \n");
    for (i = 0; i <= n; ++i) {
        x[i] = x0 + i * h;
        y[i] = f(x[i]);
        printf("%.4f\n", y[i]);
    }
    for (i = 1; i < n; ++i) {
        if (i % 2 == 1) {
            sO += y[i];
        } else {
            sE += y[i];
        }
    }
    ans = h / 3 * (y[0] + y[n] + 4 * sO + 2 * sE);
    printf("Final Integration is %.4f", ans);
}