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

vector<int> v, res;
int DFS(int sum, int m, int cnt) {
	cnt++;
	if (sum > m) {
		return 1;
	}
	if (sum == m) {
		res.push_back(cnt);
		cout << cnt << endl;
		exit(0);
		//return 1;
	}
	else {
		for (int i = 0; i < v.size(); i++) {
			DFS(sum + v[i], m, cnt);
		}
	}
}
bool compare(int a, int b) {
	return a > b;
}

int main(int argc, char* argv[]) {
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	cin >> m;
	sort(v.begin(), v.end(), compare);
	DFS(0, m, -1);
}