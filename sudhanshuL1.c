#include <stdio.h>

int main() {
    int secret = 7;
    int guess;
    int attempts = 3;

    printf("Number Guessing Game\n");

    while (attempts > 0) {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        if (guess == secret) {
            printf("🎉 You Win! Correct Guess.\n");
            return 0;
        } 
        else if (guess < secret) {
            printf("Too Low!\n");
        } 
        else {
            printf("Too High!\n");
        }

        attempts--;
        printf("Attempts left: %d\n", attempts);
    }

    printf("\n❌ You Lose! Secret number was %d\n", secret);
    return 0;
}