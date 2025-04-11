#include<stdio.h>

int main(void) {
    int N = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N-i; j++){
            printf(" ");
        }
        for(int z = 1; z <= i; z++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}