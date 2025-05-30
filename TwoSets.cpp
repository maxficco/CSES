// https://cses.fi/problemset/task/1092
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    if ((n*(n+1)/2)%2 != 0) {
        cout << "NO";
    } else {
        vector<ll> f;
        vector<ll> s;
        if (n%2!=0){
            s.push_back(n);
            n-=1;
        }
        for (int i=0; i<n/2; i++) {
            if (i%2==0){
                f.push_back(i+1LL);
                f.push_back(n-i);
            } else{
                s.push_back(i+1LL);
                s.push_back(n-i);
            }
        }
        cout << "YES" << endl;
        cout << f.size() << endl;
        for (int i=0; i<f.size(); i++) {
            cout << f[i] << " ";
        }
        cout << endl<< s.size() << endl;
        for (int i=0; i<s.size(); i++) {
            cout << s[i] << " ";
        }
    }
}
