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

int DFS(int L, int v, vector<int> ch) {
	if (v == ch.size()) {
		for (int i = 1; i < ch.size(); i++) {
			if (ch[i] == 1)
				cout << i << " ";
		}
		cout << endl;
		return 1;
	}
	else {
		ch[v] = 1;
		DFS(L + 1, v + 1, ch);
		ch[v] = 0;
		DFS(L + 1, v + 1, ch);
	}
}
int main(int argc, char* argv[]) {
	int n;
	cin >> n;
	vector<int> ch(n+1);
	DFS(0, 1, ch);
}