#include <stdio.h>
#include <string.h>
#define ll long long

ll n;

// definisikan struct untuk menyimpan variabel
typedef struct {
  ll id;
  char name[41];
} Student;

int main() {
  // gunakan fropen untuk membaca inputan dari "testdata.in"
  freopen("testdata.in", "r", stdin);

  scanf("%lld", &n);
  Student data[n];

  // untuk setiap line, assign variabel ke struct yang telah dibuat
  for (int i = 0; i < n; i++) {
    scanf("%lld#%[^\n]\n", &data[i].id, data[i].name);
  }

  // karena testcase yang kecil, maka gunakan saja bubblesort karena mudah
  for (int j = 0; j < n - 1; j++) {
    for (int k = j + 1; k < n; k++) {
      // gunakan stringcompare untuk melakukan sorting berdasarkan alphabet
      if (strcmp(data[j].name, data[k].name) > 0) {
        // jika lebih besar/kecil lakukan swap terhadap indeks data struct
        Student temp = data[j];
        data[j] = data[k];
        data[k] = temp;
      }
    }
  }

  // cetak data yang telah di sort
  for (int i = 0; i < n; i++) {
    printf("%lld %s\n", data[i].id, data[i].name);
  }

  return 0;
}