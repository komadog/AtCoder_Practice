#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> S(n);
  for (int i = 0; i < n; i++) {
    cin >> S.at(i);
  }
  int X=S.size();
  set<int> L(S.begin(), S.end());
  int Y=L.size();
  if(X==Y){
    cout << "YES" <<endl;
  }
  else{
    cout << "NO" << endl;
  }
}
