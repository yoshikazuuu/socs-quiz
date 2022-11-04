#include <stdio.h>
#include <math.h>
#include <string.h>
typedef unsigned long long ull;

int counter = 1;

int isThree(int n) {
    int binaryNum[32];
    int i = 0, flag = 0, oneCount = 0;
    
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = 0; j < i; j++) {
        if (binaryNum[j] == 1) {
            oneCount++;
        } else continue;
        if (oneCount == 3) {
            flag = 1;   
            break;
        }
    }

    return flag;
}

void solve() {
    int x, countThree = 0, countZero = 0;
    scanf("%d", &x);
    int arr[x];

    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < x; i++) {
        for (int j = i + 1; j < x; j++) {
            if (isThree(arr[i]^arr[j])) countThree++;
            else countZero++;
        }
    }

    printf("Case #%d: %d %d\n", counter++, countThree, countZero);
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        solve();
    }
    return 0;
}