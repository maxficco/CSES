//https://cses.fi/problemset/task/1094
#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	ll n; ll x;
	ll lastx = 0;
	cin >> n;
	ll ans = 0;
	for (int i=0;i<n;i++){
		cin >> x;
		if (x < lastx){
			ans += lastx-x;
		} else {
			lastx = x;
		}
	}
    cout << ans << endl;
}
