#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,K;
  cin >> N >> K;
  int min = 1;
  for (int i = 0; N > i; i++){
    if (min * 2 < min + K){
      min *= 2;
    }
    else{
      min += K;
    }
  }
  cout << min << endl;
}