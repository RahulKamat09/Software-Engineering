#include <stdio.h>

int main() {
    int amount;

    // Input amount
    printf("Enter the amount: ");
    scanf("%d", &amount);

    int temp = amount;

    // All Indian currency notes
    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[10] = {0};

    for (int i = 0; i < 10; i++) {
        if (temp >= notes[i]) {
            count[i] = temp / notes[i];
            temp = temp % notes[i];
        }
    }

    // Display breakdown
    printf("\nBreakdown of %d:\n", amount);
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%4d x %d = %d\n", notes[i], count[i], notes[i] * count[i]);
        }
    }

    printf("Total = %d\n", amount);

    return 0;
}
