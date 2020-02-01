#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  char S;
  cin >> N;
  for (int i=0; N > i; i++){
    cin >> S;
    if (S == 'Y'){
      cout << "Four" << endl;
      break;
    }
    else if(N-1 == i){
      cout << "Three" << endl;
    }
  }
}
