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
#define cmax 10000000000000

using namespace std;
const int k = 100010;

int n, m;
vector<vector<pair<int, int>>> v;
ll v_count[k];
bool v_visit[k];


void deikstry() {
	int point = 0, size;
	ll min;
	for (int c = 0; c < n; c++) {		
		min = cmax;
		for (int i = 0; i < n; i++) {
			if (!v_visit[i] && v_count[i] < min) {
				point = i;
				min = v_count[i];
			}
		}
		v_visit[point] = true;
		size = v[point].size();
		
		for (int i = 0; i < size; i++) {
			if (v_count[v[point][i].first] > (v_count[point] + v[point][i].second)) {
				v_count[v[point][i].first] = v_count[point] + v[point][i].second;
			}
		}
	}
}


int main()
{
	cin >> n >> m;
	vector<pair<int, int>> t;

	for (int i = 0; i < n; i++) {
		v.push_back(t);
		v_count[i] = cmax;
		v_visit[i] = false;
	}
	int v1, v2, w;
	for (int i = 0; i < m; i++) {
		cin >> v1 >> v2 >> w;
		v1--;
		v2--;
		v[v1].push_back(pair<int, int>(v2, w));
		v[v2].push_back(pair<int, int>(v1, w));
	}
	int start, end;
	cin >> start >> end;
	start--;
	end--;
	v_count[start] = 0;
	deikstry();
	cout << v_count[end];
	
	
	return 0;
}