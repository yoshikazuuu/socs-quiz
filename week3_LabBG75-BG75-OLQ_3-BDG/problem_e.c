#include <stdio.h>
#include <math.h>
#include <string.h>

int counter = 0, factorial = 0;

// void solve() {
//     int a;
//     scanf("%d", &a);
//     for (int i = 1; i <= sqrt(a) / 2; i++) {
//         if (a % i == 0) factorial++; 
//     }
// }

void find_factors(int num){
    for (int i=1; i<=sqrt(num); i++) {
        if (num % i == 0) {
            if (num/i == i)
                factorial++;
            else
                factorial += 2;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        factorial = 0;
        int x;
        scanf("%d", &x);
        find_factors(x);
        printf("Case #%d: %d\n", ++counter, factorial);
    }
    return 0;
}