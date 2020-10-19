#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
    bool alive;
} Cell;

int main() {
    int column = 10;
    int line = 10;
    int weight = 80;

    Cell population[column][line];

    for (int i = 0; i < line; ++i) {
        for (int j = 0; j < column; ++j) {
            if (rand() % 100 > weight){
                population[i][j].x = j;
                population[i][j].y = i;
                population[i][j].alive = true;
            } else {
                population[i][j].x = j;
                population[i][j].y = i;
                population[i][j].alive = false;
            }
        }
    }

    for (int i = 0; i < column; ++i) {
        for (int j = 0; j < line; ++j) {
            printf(population[i][j].alive == 0 ? "F " : "T ");
        }
        printf("\n");
    }


    return 0;
}
