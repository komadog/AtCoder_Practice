#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,K;
  int x;
  cin >> N >> K;
  int total = 0;
  for (int i = 0; N > i; i++){
    cin >> x;
    if (x *2 < (K-x)*2){
      total +=x*2;
    }
    else{
      total +=(K-x)*2;
    }
  }
  cout << total << endl;
}