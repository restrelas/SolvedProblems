#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &x, &y);
        printf("%d cm2\n", x * y / 2);
    }
}