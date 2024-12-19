#include <bits/stdc++.h>

using namespace std;

void firstSolution(vector<int> array) {
  int best = 0;
  for (int a = 0; a < array.size(); a++) {
    for (int b = a; b < array.size(); b++) {
      int sum = 0;
      for (int k = a; k <= b; k++) {
        sum += array[k];
      }
      best = max(best, sum);
    }
  }

  cout << best << "\n";
}

void secondSolution(vector<int> array) {
  int best = 0;
  for (int a = 0; a < array.size(); a++) {
    int sum = 0;
    for (int b = a; b < array.size(); b++) {
      sum += array[b];
      best = max(best, sum);
    }
  }

  cout << best << "\n";
}

void finalSolution(vector<int> array) {
  int best = 0, sum = 0;
  for (int k = 0; k < array.size(); k++) {
    sum = max(array[k], sum +array[k]);
    best = max(best, sum);
  }

  cout << best << "\n";
}

int main() {

}
