#include <stdio.h>

int main(void) {
    int black[6] = { 1,1,2,2,2,8 };
    int white[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &white[i]);
    }
    for (int i = 0; i < 6; i++) {
        printf("%d ", black[i] - white[i]);
    }

    return 0;
}