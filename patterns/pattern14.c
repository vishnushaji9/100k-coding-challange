// 1 2 3 4 4 3 2 1
// 1 2 3 * * 3 2 1
// 1 2 * * * * 2 1
// 1 * * * * * * 1
#include <stdio.h>

int main() {
    int i, j;
    int n = 4;

    for(i = 1; i <= n; i++) {
        // Left side numbers
        for(j = 1; j <= n - i + 1; j++) {
            printf("%d ", j);
        }

        // Middle stars
        for(j = 1; j <= 2 * (i - 1); j++) {
            printf("* ");
        }

        // Right side numbers
        for(j = n - i + 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
