#include <bits/stdc++.h>

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
const int MAXS = 100007;

void solvetask(){

  string s;
  cin >> s;
  string x = "0123456789";
  sort(all(s));
  s+="0";
  for(int i = 0; i < s.size(); ++i){
    if(s[i]!=x[i]){
      cout << x[i];
      break;
    }
  }
  
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  // cin >> TT;
  while(TT--) solvetask();
}
