#include <stdio.h>
#define TOTAL_SEATS 5
int main() {
    int seats[TOTAL_SEATS] = {0, 0, 0, 0, 0}; 
    int choice, seatNum;
    do {
        printf("\n--- BUS TICKET SYSTEM ---\n");
        printf("1. View Seats\n");
        printf("2. Book a Seat\n");
        printf("3. Cancel a Seat\n");
        printf("4. Exit\n");
        printf("Enter choice (1-4): ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: 
                printf("\n--- Seat Status ---\n");
                for(int i = 0; i < TOTAL_SEATS; i++) {
                    if(seats[i] == 0) {
                        printf("Seat %d: [ AVAILABLE ]\n", i + 1);
                    } else {
                        printf("Seat %d: [ BOOKED ]\n", i + 1);
                    }
                }
                break;
            case 2: 
                printf("\nEnter seat number to book (1-%d): ", TOTAL_SEATS);
                scanf("%d", &seatNum);
                if(seatNum < 1 || seatNum > TOTAL_SEATS) {
                    printf("Invalid seat number!\n");
                } else if(seats[seatNum - 1] == 1) {
                    printf("Seat is already taken!\n");
                } else {
                    seats[seatNum - 1] = 1; 
                    printf("Seat %d booked successfully!\n", seatNum);
                }
                break;
            case 3: 
                printf("\nEnter seat number to cancel (1-%d): ", TOTAL_SEATS);
                scanf("%d", &seatNum);
                if(seatNum < 1 || seatNum > TOTAL_SEATS) {
                    printf("Invalid seat number!\n");
                } else if(seats[seatNum - 1] == 0) {
                    printf("Seat is already empty!\n");
                } else {
                    seats[seatNum - 1] = 0; 
                    printf("Booking for Seat %d canceled!\n", seatNum);
                }
                break;
            case 4: 
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 4);
    return 0;
}
