// https://cses.fi/problemset/task/1083
#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    ll sum = n*(n+1)/2;
    ll a;
    for (int i = 0; i < n-1; i++){
        cin >> a;
        sum -= a;
    }
    cout << sum << endl;
}
