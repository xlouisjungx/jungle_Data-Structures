#include<stdio.h>

int main(void) {
    int M = 0, N = 0, i = 0, j = 0, num = 0, Array[100], com[100];

    scanf("%d %d", &N, &M);
    
    for (int x = 1; x <= N; x++) {
        Array[x] = x;
    }

    for (int x = 1; x <= M; x++) {
        scanf("%d %d", &i, &j);
        for (j; j >= i; j--) {
            com[j] = j;
        }
        for (i; i <= j; i++) {
            Array[i] = com[i];
        }
    }

    for (int x = 1; x <= N; x++) {
        printf("%d ", Array[x]);
    }
    printf("\n");
    return 0;
}