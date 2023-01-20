#include <stdio.h>
#include <math.h>
#include <string.h>
typedef unsigned long long ull;

int main() {
    int rows, column, queries;

    scanf("%d %d %d", &rows, &column, &queries);

    int finalArray[rows][column];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            finalArray[i][j] = 0;
        }
    }

    while (queries--) {
        int x, y, a;

        scanf("%d %d %d", &x, &y, &a);

        finalArray[x][y] = a;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d", finalArray[i][j]);
            if (j != column - 1) putchar(' ');
        }
        putchar('\n');
    }
}