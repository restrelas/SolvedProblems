#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 107

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main(){
  INP; OUT;
  string s, ans = "";
  while(cin >> s){
    for(int i = 0; i < s.size(); ++i){
      if(s[i] == '|') s[i] = '\n';
      ans += s[i];
    }

  }
  cout << ans;
}