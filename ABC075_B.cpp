#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int h,w;
  cin >> h >> w;
  string board[50];
  for (int i=0; h > i;i++){
    cin >> board[i];
  }
  const int dx[8]= {1,0,-1,0,1,-1,-1,1};
  const int dy[8]= {0,1,0,-1,1,1,-1,-1};

  for (int i=0; h > i; i++){
    for (int j=0; w > j; j++){
      if (board[i][j]=='#') {
        continue;
      }
      int count = 0;
      for (int d=0; 8 > d; d++){
        const int ni = dy[d]+i;
        const int nj = dx[d]+j;
        if(ni >= h || ni < 0) continue;
        if(nj >= w || nj < 0) continue;
        if(board[ni][nj] == '#') count++;
      }
       board[i][j]=char(count+'0');
    }
  }
  for (int i=0; h > i;i++){
    cout << board[i] <<endl;
  }
}