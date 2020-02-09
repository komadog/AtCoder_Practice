#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,w;
  char board_a[100][100],board_b[102][102];
  cin >> h >> w;
  for(int i=0; i<h; i++){
    cin >> board_a[i];
  }
  for (int i=0; i<h+2; i++){
    for (int j=0; j<w+2; j++){
      board_b[i][j] = '#';
    }
  }
  for (int i=0; i<h; i++){
    for (int j=0; j<w; j++){
      board_b[i+1][j+1]=board_a[i][j];
    }
  }
  for (int i=0; i<h+2; i++){
    for (int j=0; j<w+2; j++){
      cout << board_b[i][j];
    }
    cout << endl;
  }
}