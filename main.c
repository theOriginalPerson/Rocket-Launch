#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

char rocket(bool);
int fuel_variation(bool activated);

void delay(int num_sec) {
    int ms = 1000 * num_sec;
    clock_t start_time = clock();
    while (clock() < start_time + ms);
}

int main(void) {
    int launch;

    printf("Launch rocket? (1 for yes, 2 for no): ");
    scanf("%i", &launch);

    while (launch == 2) {
        printf("On standby... activate rocket at any time (y/n): ");
        scanf("%i", &launch);
    }

    if (launch == 1) {
        printf("%c", rocket(true));
    }

    return 0;
}

char rocket(bool fuel) {
    if (fuel == true) {
        printf("All systems go...\n");
        delay(1000);
        printf("3\n");
        delay(1000);
        printf("2\n");
        delay(1000);
        printf("1\n");
        delay(1000);
        printf("\t\t\t / \\");
        printf("\n\t\t\t/   \\");
        printf("\n\t\t\t-----");
        printf("\n\t\t\t|   |");
        printf("\n\t\t\t| S |");
        printf("\n\t\t\t| p |");
        printf("\n\t\t\t| a |");
        printf("\n\t\t\t| c |");
        printf("\n\t\t\t| e |");
        printf("\n\t\t\t| X |");
        printf("\n\t\t\t|   |");
        printf("\n\t\t\t-----");
        printf("\n\t\t      ///===\\\\\\");
        printf("\n\t\t     ///=====\\\\\\");

        return (fuel_variation(true));
    }
    
    return 0;
}

int fuel_variation(bool activated) {
    char pyro[] = "#####";
    int count = 0;

    if (activated == true) {
        while (activated) {
            if (count >= 7) {
                delay(30);
                printf("\n\t\t\t%s", pyro);
            }
            delay(100);
            printf("\n\t\t\t%s", pyro);
            count += 1;
        }
    }

    return 0;
}