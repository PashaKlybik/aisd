/*#include <iostream>
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

bool mefunction(int i, int j)
{
	return (i<j);
}

int main()
{
	int n;
	cin >> n ;
	ll arr[100000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	std::sort(arr, arr + n, mefunction);

	if ((arr[0]*arr[1]) >(arr[n-1]*arr[n-2])) {
		cout << arr[0] * arr[1];
	}
	else {
		cout << (arr[n - 1] * arr[n - 2]);

	}
	return		0;
}*/