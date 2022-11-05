#include <iostream>
#include <vector>
#include <stack>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
using namespace std;

int main() {
	fast;
	int n;
	cin >> n;
	int Su;
	cin >> Su;
	int sum = Su, maxsum = -1001;
	if (maxsum < Su) maxsum = Su;
	for (int i = 1; i < n; i++) {
		cin >> Su;
		if (Su < Su + sum) {
			if (maxsum < sum + Su) maxsum = sum + Su;
			sum += Su;
		}
		else {
			sum = Su;
			if (maxsum < Su) maxsum = Su;
		}
	}
	cout << maxsum;
}