#include <stdio.h>
#include <math.h>
#include <string.h>
typedef unsigned long long ull;

int decToBinary(int n) {
    int temp[32];
    int binaryNumber[32];
 
    int i = 0;
    while (n > 0) {
        temp[i] = n % 2;
        n = n / 2;
        i++;
    }

    int now = 0;
 
    for (int j = i - 1; j >= 0; j--) {
        binaryNumber[now] = temp[j];
        now++;
    }

    return binaryNumber;
}

void solve() {
    int x;
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }
    int firstBinaryNumber[32] = decToBinary(arr[0]);
    int first = sizeof(firstBinaryNumber)/sizeof(firstBinaryNumber[0]);

    int secondBinaryNumber[32] = decToBinary(arr[1]);
    int second = sizeof(secondBinaryNumber)/sizeof(secondBinaryNumber[0]);

    int temp;
    (first > second) ? temp ? 
    for (int i = 0; i < ; ++) {
        
    }
    
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        solve();
    }
    return 0;
}