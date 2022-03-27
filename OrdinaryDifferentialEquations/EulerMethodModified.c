#include <math.h>
#include <stdio.h>
#define f(x, y) (x * x + y)
int main() {
    int i, j, c;
    float x[100], y[100], h, m[100], m1, m2, a, s[100], w;
    printf("Enter the x0, xN, h, y0: ");
    scanf("%f %f %f %f", &x[0], &h, &a, &y[0]);
    s[0] = y[0];
    for (i = 1; x[i - 1] < a; ++i) {
        w = 100.0;
        x[i] = x[i - 1] + h;
        m[i] = f(x[i - 1], y[i - 1]);
        c = 0;
        while (w > 0.0001) {
            m1 = f(x[i], s[c]);
            m2 = (m[i] + m[1]) / 2;
            s[c + 1] = y[i - 1] + m2 * h;
            w = s[c] - s[c + 1];
            w = fabs(w);
            c++;
        }
        y[i] = s[c];
    }
    printf("The respective values of x and y are\nx\t\ty\n");
    for (j = 0; j < i; ++j) {
        printf("%.4f\t%.4f\n",x[j], y[j]);
    }
}