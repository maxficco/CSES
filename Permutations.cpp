// https://cses.fi/problemset/task/1070
#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    if (n==1) cout << 1 << endl;
    else if (n==2 or n==3) cout << "NO SOLUTION" << endl;
    else if (n==4) cout << "3 1 4 2" << endl;
    else {
        for (int i = 1; i <= n; i+= 2) cout << i << " ";
        for (int i = 2; i <= n; i+= 2) cout << i << " ";
    }
}
