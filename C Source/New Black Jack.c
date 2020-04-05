// New Rule . Black Jack (no.21 = M)

#include <stdio.h>

int n, m, i, j, k, a[101], min;

int main() {
    scanf_s("%d %d", &n, &m);
    for (int i = 0; i < n; i++) scanf_s("%d", &a[i]);

    for (i = 0; i < n; i++) for (j = 0; j < n; j++) for (k = 0; k < n; k++)
        if (i != j && j != k && k != i) {
            int t = a[i] + a[j] + a[k];
            if (t <= m && min < t) min = t;
        }

    printf("%d", min);

    return 0;
}
