#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int r, o, c;
	cin >> r >> o >> c;
	// follow the formula in the information below the given input
	int overs = 20 - o;
	int times = overs * 6;
	int maximum_score = times * 6;
	cout << (c + maximum_score > r ? "YES" : "NO") << '\n';
	return 0;
}
