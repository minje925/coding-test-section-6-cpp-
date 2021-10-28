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

int n;
vector<int> v;
int DFS(int L, int sum, int total) {
	if (L == n) {
		int sum2 = total - sum;
		if (sum2 == sum) {
			cout << "YES" << endl;
			exit(0);
		}
		return 1;
	}
	else {
		DFS(L + 1, sum + v[L], total);
		DFS(L + 1, sum, total);
	}
}

int main(int argc, char* argv[]) {
	int total = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
		total += temp;
	}
	DFS(0, 0, total);

}