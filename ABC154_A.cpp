#include <bits/stdc++.h>
using namespace std;

int main() {
  string S,T,U;
  int A,B;
  cin >> S >> T >> A >> B >> U;
  if (S == U){
    cout << A-1 << ' ' << B << endl;
  }
  else if (T == U){
    cout << A << ' ' <<B-1 << endl;
  }
  else{
    cout << A << ' ' <<B << endl;
  }
}
