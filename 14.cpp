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
vector<int> arr;
string str;

void gen(int k) {
	if (k == str.length()) {
		arr.push_back( atoi(str.c_str()) );
	}
	else {
		for (int i = k; i < str.length(); i++) {
			swap(str[i], str[k]);
			gen(k + 1);
			swap(str[i], str[k]);
		}
	}
}

int main()
{
	cin >> str;
	int num = atoi(str.c_str());
	gen(0);
	int min = 1000009;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > num) {
			if (arr[i] < min) {
				min = arr[i];
			}
		}
	}
	if (min == 1000009) {
		cout << "-1";
	}
	else {
		cout << min;
	}
	return 0;
}*/