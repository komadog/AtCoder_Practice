#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  int x = N;
  int total = 0;
  for (int i = 0; 9 > i; i++){
    total += x % 10;
    x /= 10;
  	if (x == 10){
      total += 1;
      break;
    }
    else if(x < 10){
      total += x;
      break;
    }
  }
  if (N % total == 0){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}