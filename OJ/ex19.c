#include <stdio.h>

int g(int m, int n) {
    if (m == 0) {
        return 0;
    } else if (m > 0 && n >= 0) {
        return g(m - 1, 2 * n) + n;
    }
}

int main() {
    int m, n;
    scanf("%d,%d", &m, &n);
    printf("%d\n",g(m, n));
    return 0;
}