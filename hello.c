#include <stdio.h>

int main() {5
    int N;
    scanf("%d", &N);
    int arrat[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arrat[i]);
    }
    for(int i = 0; i <  N; i++) {
            printf("%d ", arrat[i]);
    }
    return 0;
}