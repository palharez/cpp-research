#include <bits/stdc++.h>

using namespace std;

int main() {
  long long x = 123456789123456789LL;
  
  // This code generates an error
  int a = 123456789;
  long long b = a*a;

  cout << b << "\n"; // -1757895751
}