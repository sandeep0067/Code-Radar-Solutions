


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) { // Rows decrease from n to 1
        for (int j = 1; j <= i; j++) { // Print numbers from 1 to i
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
