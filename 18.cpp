/*
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>


#define ll long long

using namespace std;
vector<int> v[10000];
bool vusd[10000];

void dfs(int u) {
	vusd[u] = true;
	for (int i = 0; i < v[u].size(); i++) {
		int nxt = v[u][i];
		if (!vusd[nxt]) {
			dfs(nxt);
		}
	 }
}

int main()
{
	int n, m, left = 0, rigth = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int r;
		cin >> left >> r;
		v[left].push_back(int(r));
		v[r].push_back(int(left));
	}
	int cns = 0;
	for (int i = 1; i <= n; i++) {
		if (!vusd[i]) {
			dfs(i);
			cns++;
		}
	}
	if (cns == 1) { cout << m - n + cns; }
	else cout << "-1";
	return 0;
}
*/