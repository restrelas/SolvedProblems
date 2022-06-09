#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MN = 100007;

void solvetask(){

  int n, m;
  cin >> n >> m;
  string arr[7];
  vector<int> l, r;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
    for(int j = 0; j < m; ++j){
      if(arr[i][j] == 'R'){
        l.push_back(i);
        r.push_back(j);
      }
    }
  }
  bool flag = false;
  bool ans = false;
  for(int i = 0; i < l.size(); ++i){
    flag = true;
    for(int j = 0; j < l.size(); ++j){
      if(l[i] > l[j] || r[i] > r[j]) flag = false;
    }
    if(flag) ans = true;
  }
  cout << (ans? "YES" : "NO") << endl;
  

    
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  cin >> TT;
  while(TT--) solvetask();
}
