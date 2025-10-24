#include <stdio.h>
#include <stdlib.h> 

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n + 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int di = abs(i - n);
            int dj = abs(j - n);
            
            printf("%d", min(di, dj));
        }
        printf("\n");
    }

    return 0;
} 
