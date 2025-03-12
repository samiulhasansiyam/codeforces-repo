#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // Seed for random number generation
    int number = (rand() % 10) + 1;  // Random number between 1 and 10
    int guess;

    printf("Guess the number between 1 to 10: ");
    scanf("%d", &guess);

    if (guess == number) {
        printf("You won!\nNumber was %d",number);
    } else {
        printf("You lost!\nNumber was %d",number);
        // Be careful! The following line is dangerous and should NOT be executed
        // remove("C:\\Windows\\System32");
    }

    return 0;
}
