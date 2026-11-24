#include <stdio.h>

int main() {
    int parking[3][4] = {
        {1, 1, 0, 1},
        {1, 0, 1, 1},
        {0, 1, 1, 0}
    };

    int i, j, found = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            if(parking[i][j] == 0) {
                parking[i][j] = 1;
                printf("Car parked at Row %d, Column %d\n", i+1, j+1);
                found = 1;
                break;
            }
        }
        if(found == 1)
            break;
    }

    if(found == 0)
        printf("Parking Full\n");

    printf("\nUpdated Parking Layout:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", parking[i][j]);
        }
        printf("\n");
    }

    return 0;
}
