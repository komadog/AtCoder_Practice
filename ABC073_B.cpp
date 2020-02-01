#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, l, r;
  int total = 0;
  cin >> N;
  for (int i=0; N > i; i++){
    cin >> l >> r;
    total += r - l + 1;
  }
  cout << total << endl;
}