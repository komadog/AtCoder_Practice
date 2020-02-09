#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  vector<float> P(n);
  int max = 0;
  int max_i = 0;
  double ans;
  for (int i = 0; i < n; i++) {
    cin >> P.at(i);
  }
  for (int i = 0; i < n-k+1; i++) {
    int A=0;
    int h=i;
    for (int j = 0; j < k; j++){
      A+=P.at(h);
      h++;
    }
    if(max<A){
      max=A;
    }
  }
  for (int i = 0; i < n-k+1; i++) {
    int B=0;
    int f=i;
    for (int j = 0; j < k; j++){
      B+=P.at(f);
      f++;
    }
    if(max==B){
      max_i=i;
      break;
    }
  }
  for (int i=0; i<k; i++){
    ans+=(P.at(max_i)+1)/2;
    max_i++;
  }
  cout << ans << endl;
}