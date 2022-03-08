#include <stdio.h>
#include <math.h>
#define raj(x) ((cos(x) + 2) / 3)
int main() {
    float a[100], b[100], c;
    int j = 0;
    b[0] = (cos(0) - 3 * 0 + 1);
    printf("Enter initial guess: ");
    scanf("%d", &a[0]);
    printf("The values of iteration are:\n");
    do {
        a[j + 1] = raj(a[j]);
        c = a[j + 1] - a[j];
        c = fabs(c);
        printf("%d\t%f\n", j, a[j]);
        j++;
    } while (c > 0.00001);
    printf("The root of given function is %f", a[j]);
}
