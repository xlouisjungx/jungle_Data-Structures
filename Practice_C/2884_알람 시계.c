# include<stdio.h>

int main(void) {
    int H = 0, M = 0;
    scanf("%d %d", &H, &M);

    if(M - 45 < 0) {
        if(H - 1 < 0) {
            H += 23;
            printf("%d %d\n", H, M + 60 - 45);
        }
        else {
            printf("%d %d\n", H - 1, M + 60 - 45);
        }
    }
    else {
        printf("%d %d\n", H, M - 45);
    }
    return 0;
}
