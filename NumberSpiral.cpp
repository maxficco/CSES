//https://cses.fi/problemset/task/1068
#include <iostream>
using namespace std;
typedef long long ll;
ll grid(ll y, ll x){
    if (y==x) return x*(x-1)+1;
    if (y<x) {
        if (x%2==0) return x*(x-1)+1-(x-y);
        return x*(x-1)+1+(x-y);
    }
    if (y%2==0) return y*(y-1)+1+(y-x);
    return y*(y-1)+1-(y-x);
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int x,y;
        cin >> y >> x;
        cout << grid(y,x) << endl;
    }
}
