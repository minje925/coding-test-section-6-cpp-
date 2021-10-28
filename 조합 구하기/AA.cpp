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

int DFS(int L, int n, int m, vector<int> v, vector<int> ch, int s) {
	if (L == m) {
		for (int i = 0; i < m; i++) {
			cout << ch[i] << " ";
		}
		cout << endl;
		return 1;
	}
	else {
		for (int i = s; i <= n; i++) {
				ch[L] = i;
				DFS(L + 1, n, m, v, ch, i+1);
				//ch[i] = 0;
		}
	}
}

int main(int argc, char* argv[]) {
	int n, m;
	cin >> n >> m;
	vector<int> v, ch(n+1);
	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}
	DFS(0, n, m, v, ch, 1);

}