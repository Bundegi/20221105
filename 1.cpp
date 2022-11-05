#include <iostream>
#include <vector>
#include <stack>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
using namespace std;
//1874 backjun 
int main() {
	fast;
	stack<int> st;
	vector<int> Array;
	vector<char> Booho;
	int N;
	cin >> N;
	int Su;
	for (int i = 0; i < N; i++) {
		cin >> Su;
		Array.push_back(Su);
	}
	int M = 0;
	for (int i = 1; M < Array.size();) {
		if (st.empty()|| i <= Array[M]) {
			st.push(i);
			Booho.push_back('+');
			i++;
		}
		else if (st.top() == Array[M]) {
			st.pop();
			Booho.push_back('-');
			M++;
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; i < Booho.size(); i++) cout << Booho[i] << endl;
}
