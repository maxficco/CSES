// https://cses.fi/problemset/task/1618
#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    ll n; cin >> n;
    ll fives = 0;
    ll a = 5;
    while (a <= n) { 
        fives += n/a;
        a *= 5;
    }
    cout << fives << endl;
}
