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

vector<int> v;
int n, cnt = 0;
int DFS(int L, int m, vector<int> res) {
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
			res[L] = i;
			DFS(L + 1, m, res);
		}
	}
}

int main(int argc, char* argv[]) {
	int m;
	cin >> n >> m;
	vector<int> res(m);
	DFS(0, m, res);
	cout << cnt << endl;
}