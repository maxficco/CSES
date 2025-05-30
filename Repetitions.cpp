// https://cses.fi/problemset/task/1069
#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    string n;
    cin >> n;
    int longest = 1;
    int streak = 1;
    char letter = n[0];
    for (int i = 1; i < n.size(); i++){
        if (n[i] == letter){
            streak += 1;
        } else {
            letter = n[i];
            streak = 1;
        }
        if (streak > longest) longest = streak;
    }
    cout << longest << endl;
}
