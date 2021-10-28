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
int n;
int DFS(int L, int sum, int max) {
	if (sum > max)
		return 1;
	else
		res.push_back(sum);
	if (sum == max || L == n) {
		//res.push_back(sum);
		return 1;
	}
	else {
		DFS(L + 1, sum + v[L], max);
		DFS(L + 1, sum, max);
	}
}
int main(int argc, char* argv[]) {
	int c;
	cin >> c >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	DFS(0, 0, c);
	cout << "¹«°Ô : ";
	int max = -2147000000;
	
	for (int i = 0; i < res.size(); i++) {
		if (res[i] > max)
			max = res[i];
	}
	cout << max << " ";
	
}