#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B;
  cin >> A >> B;
  int ans = 0;
  for (int i=A; B >= i; i++){
    if (i/10000 == i%10 && i/10%10 == i/1000%10){
      ans +=1;
    }
  }
  cout << ans << endl;
}