// https://cses.fi/problemset/task/1072
#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin>>n;
    for(ll k = 1; k <= n; k++){
        cout << (k*k)*(k*k - 1)/2 - 4*(k-2)*(k-1) << endl;
    }
}
