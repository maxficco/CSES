// https://cses.fi/problemset/task/1617
#include <iostream>
#include <cmath>
using namespace std;
#define MOD 1000000007

int main() {
    int n, answer = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        answer *= 2;
        answer %= MOD;
    }
    cout << answer;
}
