#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 100007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

ll lista[MAXS];
int a, b, c;

int main(){
  cin >> a >> b >> c;
  lista[0] = c;
  for(int i = 0; i < 10; ++i){
    lista[i+1] = lista[i] * a - b;
    cout << lista[i+1] << endl;
  }
}