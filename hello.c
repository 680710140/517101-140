#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arrat[N];
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arrat[i]);
    }
    for(int i = 0; i < 10; i++) {
            printf("%d ", arrat[i]);
    }
    return 0;
}