#include <stdio.h>

int main() {
    int num, k = 2;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("Factoring Result : ");

    while (num != 1) {
        while (num % k == 0) {
            printf("%d ", k);
            num = num / k;
            if (num != 1) {
                printf("x ");
            }
        }
        k++;
    }
    return 0;
}
