
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M;
  cin >> N >> M;
  vector<int> roads_A(M*2);
  vector<int> roads_B(M*2);
  vector<int> ans(N,0);
  for(int i=0; i<M; i++){
    cin >> roads_A[i] >> roads_B[i];
  }
  for (int i=0; i<M; i++){
    ans[roads_A[i]-1]+=1;
    ans[roads_B[i]-1]+=1;
  }
  for(int i=0; i<N; i++){
    cout << ans[i] << endl;
  }
}

// なぜかREが一個だけでる最初に出した答え　総当たりなので最適解ではない
//↓は二重ループを使うので計算量がO(NM)になるが、↑は単ループなのでO(N+M)になる。
/*

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M;
  cin >> N >> M;
  vector<int> roads(M*2);
  vector<int> ans(M*2);
  for(int i=0; i<M*2; i++){
    cin >> roads[i];
  }
  for (int i=0; i<N; i++){
    int cnt = 0;
    for (int j=0; j<M*2; j++){
      if(roads[j]==i+1){
        cnt++;
      }
      else{
        continue;
      }
      ans[i]=cnt;
    }
  }
  for(int i=0; i<N; i++){
    cout << ans[i] << endl;
  }
  return 0;
}

*/