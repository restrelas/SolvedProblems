#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"
#define debugarr(a, b) cerr <<"[ ";for(int i=0;i<b;++i)\
cerr<<a[i]<<" "; cerr<<"]\n";

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int INF = (int)__builtin_inf();
const int MN = 100007;

void solvetask(){

  int n, m;
  cin >> n >> m;
  vector<string> mx(n);
  for(int i = 0; i < n; ++i){
    cin >> mx[i];
  }
  for(int i = n-1; i >= 0; --i){
    for(int j = m-1; j >= 0; --j){
      if(mx[i][j] == '*'){
        int x = i+1;
        while(x <= n-1 && mx[x][j] == '.'){
          swap(mx[x][j], mx[x-1][j]);
          ++x;
        }
      }
    }
  }
  for(auto i : mx){
    cout << i << endl;
  }
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
