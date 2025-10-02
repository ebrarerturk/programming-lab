#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int user_guess;
    srand(time(NULL));    //initialize random number generator
    int computer_number = rand() % 100 + 1;    //random number between 1 and 100

    printf("Enter a number: ");
    scanf("%d", &user_guess);

    if (user_guess == computer_number) {
        printf("Correct guess! Your number: %d\nComputer's number: %d", user_guess, computer_number);
    } else if (user_guess > computer_number) {
        printf("Try a smaller number! Your number: %d\nComputer's number: %d", user_guess, computer_number);
    } else {
        printf("Try a larger number! Your number: %d\nComputer's number: %d", user_guess, computer_number);
    }

    return 0;
}
