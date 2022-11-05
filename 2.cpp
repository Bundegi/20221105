#include <iostream>
#include <vector>
#include <stack>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
using namespace std;
//1912backjun dp문제 연속합
//아직 dp는 머리속에서 개념이 잘 안잡히는 느낌.
//조금 더 dp를 파봐서 유형들을 머리 속에 넣어놔야 할 것 같음.
//이 문제도 답을 본건 아니지만 힌트로 인해서 풀었음(그게답인가)
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
