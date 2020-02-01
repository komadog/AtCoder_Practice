#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,K;
  int ans = 0;
  int min = 999;
  cin >> N;
  for (int i= 0; N > i; i++){
    cin >> K;
    int ans = 0;
    while (K%2 == 0){
      K /= 2;
      ans += 1;
    }
    if (ans < min)
      min = ans;
  }
  cout << min << endl;
}