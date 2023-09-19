#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player_runs = 0, computer_runs = 0;
    int player_choice, computer_choice;
    srand(time(NULL));

    printf("Welcome to Hand Cricket Game!\n");

    while (1) {
        printf("Enter your choice (1-6): ");
        scanf("%d", &player_choice);

        if (player_choice < 1 || player_choice > 6) {
            printf("Invalid choice. Please choose a number between 1 and 6.\n");
            continue;
        }

        computer_choice = rand() % 6 + 1;

        printf("Computer's choice: %d\n", computer_choice);

        if (player_choice == computer_choice) {
            printf("You're out!\n");
            break;
        } else {
            printf("You scored %d runs.\n", player_choice);
            player_runs += player_choice;
        }

        computer_choice = rand() % 6 + 1;

        printf("Computer's batting choice: %d\n", computer_choice);

        if (player_choice == computer_choice) {
            printf("Computer is out!\n");
            break;
        } else {
            printf("Computer scored %d runs.\n", computer_choice);
            computer_runs += computer_choice;
        }

        printf("Your total runs: %d\n", player_runs);
        printf("Computer's total runs: %d\n", computer_runs);
    }

    printf("Game Over!\n");

    if (player_runs > computer_runs) {
        printf("You win by %d runs!\n", player_runs - computer_runs);
    } else if (player_runs < computer_runs) {
        printf("Computer wins by %d runs!\n", computer_runs - player_runs);
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}
