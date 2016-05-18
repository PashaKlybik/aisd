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

int main()
{
	int n;
	cin >> n;
	ll a, last, max, sum = 0;
	cin >> last;
	max = last;
	for (int i = 1; i < n; i++) {
		cin >> a;
		if (a > max) {
			sum += (a - max);
			max = a;
		}
		else
		{
			if (a < last) {
				sum += (last - a);
			}
		}		
		last = a;
	}
	cout << sum;
	return	0;
}*/