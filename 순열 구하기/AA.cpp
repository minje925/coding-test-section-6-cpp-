#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>
using namespace std;

int cnt = 0;
int DFS(int L, int n, int m, vector<int> res, vector<int> ch) {
	if (L == m) {
		for (int i = 0; i < res.size(); i++) {
			cout << res[i] << " ";
		}
		cnt++;
		cout << endl;
		return 1;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (ch[i] == 0) {
				ch[i] = 1;
				res[L] = i;
				DFS(L + 1, n, m, res, ch);
				ch[i] = 0;
			}
		}
	}
}
int main(int argc, char* argv[]) {
	int n, m;
	cin >> n >> m;
	vector<int> ch(n+1),res(m);
	DFS(0, n, m, res, ch);
	cout << cnt << endl;
}