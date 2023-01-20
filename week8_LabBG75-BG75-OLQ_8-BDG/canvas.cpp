#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

// Function to find the minimum of the biggest height differences
int minBiggestDifference(int heights[], int n) {
  // sort the array in ascending order
  sort(heights, heights + n);

  // initialize the minimum difference to be the maximum possible value
  int minDiff = -1 * INT_MAX;

  // compute the difference between each pair of adjacent elements
  for (int i = 1; i < n; i++)
    minDiff = max(minDiff, heights[i] - heights[i - 1]);

  return minDiff;
}

int main() {
  // number of test cases
  int T;
  cin >> T;

  // loop through each test case
  for (int t = 1; t <= T; t++) {
    // number of students
    int n;
    cin >> n;

    // array to store the heights of the students
    int heights[n];
    for (int i = 0; i < n; i++)
      cin >> heights[i];

    // find the minimum of the biggest height differences
    int minDiff = minBiggestDifference(heights, n);

    // print the result
    cout << "Case #" << t << ": " << minDiff << endl;
  }

  return 0;
}
