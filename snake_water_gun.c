#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp) {
    // Return 1 if you win, -1 if you lose, 0 if draw
    if (you == comp)
        return 0;

    if (you == 's' && comp == 'w')
        return 1;
    else if (you == 'w' && comp == 's')
        return -1;

    if (you == 'w' && comp == 'g')
        return 1;
    else if (you == 'g' && comp == 'w')
        return -1;

    if (you == 'g' && comp == 's')
        return 1;
    else if (you == 's' && comp == 'g')
        return -1;

    return 0;
}

int main() {
    char you, comp;
    int number;
    srand(time(0)); // seed for random number

    number = rand() % 100;
    if (number < 33)
        comp = 's';
    else if (number < 66)
        comp = 'w';
    else
        comp = 'g';

    printf("\n=== Snake, Water, Gun Game ===\n");
    printf("Enter 's' for Snake, 'w' for Water, 'g' for Gun: ");
    scanf(" %c", &you);

    int result = snakeWaterGun(you, comp);

    printf("You chose '%c' and computer chose '%c'.\n", you, comp);

    if (result == 0)
        printf("Game Draw!\n");
    else if (result == 1)
        printf("You Win!\n");
    else
        printf("You Lose!\n");

    printf("===============================\n");
    return 0;
}
