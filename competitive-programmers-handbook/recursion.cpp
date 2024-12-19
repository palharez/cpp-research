#include <bits/stdc++.h>

using namespace std;

void f(int n) {
  cout << n;
  if (n == 1) return;
  f(n-1);
}

int main() {
  f(45);
}