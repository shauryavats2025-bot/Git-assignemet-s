#include <stdio.h>
#define SIZE 3
void addRecords(char names[SIZE][20], int scores[SIZE]);
void showRecords(char names[SIZE][20], int scores[SIZE]);
void showAverage(int scores[SIZE]);
int main() {
    char names[SIZE][20]; 
    int scores[SIZE];     
    printf("=== Simple Student System ===\n");
    addRecords(names, scores);
    showRecords(names, scores);
    showAverage(scores);
    return 0;
}
void addRecords(char names[SIZE][20], int scores[SIZE]) {
    printf("\n--- Enter Data for %d Students ---\n", SIZE);
    for(int i = 0; i < SIZE; i++) {
        printf("Enter name for student %d (no spaces): ", i + 1);
        scanf("%s", names[i]); 
        printf("Enter score for student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }
}
void showRecords(char names[SIZE][20], int scores[SIZE]) {
    printf("\n--- Student Records ---\n");
    for(int i = 0; i < SIZE; i++) {
        printf("Name: %s | Score: %d\n", names[i], scores[i]);
    }
}
void showAverage(int scores[SIZE]) {
    int sum = 0;
    for(int i = 0; i < SIZE; i++) {
        sum = sum + scores[i];
    }
    float average = (float)sum / SIZE;
    printf("\nClass Average: %.2f\n", average);
}
