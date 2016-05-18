/*#include <iostream>
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
#include <algorithm>

#define ll long long


using namespace std;

bool mefunction(int i, int j)
{
	return (i<j);
}

int main()
{
	int n, k;
	cin >> n >> k;
	ll arr[100000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	std::sort(arr, arr+n, mefunction);
	ll comp = 1;
	ll  p = 1000000007;
	if (arr[0]>=0){
		for (int i = n - 1; i > n - k - 1; i--) 
			comp = ((comp % p)*(arr[i] % p)) % p;
	}
	else if (arr[n - 1] <= 0) {
		if (k % 2 == 0) {
			for (int i = 0; i > k; i++) 
				comp = ((comp % p)*(arr[i] % p)) % p;
		}
		else
		{
			for (int i = n - 1; i > n - k - 1; i--)
				comp = ((comp % p)*(arr[i] % p)) % p;
		}
	}
	else {
		int left = 0, right = n - 1;
		while (k > 0)
		{
			if ((arr[left] * arr[left + 1]) >= (arr[right] * arr[right - 1]) && k > 1) {
				comp = (((comp % p) * ((arr[left] % p) * (arr[left + 1] % p) % p)) % p);
				left += 2;
				k -= 2;
			}
			else {
				comp = ((comp % p) * (arr[right] % p)) % p;
				right--;
				k--;
			}

		}
	}
	
	comp = (comp + p) % p;
	cout << comp;
	
	return	0;
}*/