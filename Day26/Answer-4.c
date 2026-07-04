#include <stdio.h>
int main() {
    char answer;
    int score = 0;
    printf("--- WELCOME TO THE QUICK QUIZ ---\n\n");
    printf("1. What is the capital of France?\n");
    printf("A) London\nB) Paris\nC) Rome\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n\n");
        score = score + 1;
    } else {
        printf("Wrong. The correct answer is B.\n\n");
    }
    printf("2. What is 5 + 3?\n");
    printf("A) 7\nB) 8\nC) 9\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n\n");
        score = score + 1;
    } else {
        printf("Wrong. The correct answer is B.\n\n");
    }
    printf("3. Which animal barks?\n");
    printf("A) Cat\nB) Bird\nC) Dog\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n\n");
        score = score + 1;
    } else {
        printf("Wrong. The correct answer is C.\n\n");
    }
    printf("--- QUIZ OVER ---\n");
    printf("Your total score is: %d out of 3\n", score);
    return 0;
}
