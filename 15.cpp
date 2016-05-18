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



int main()
{
	char  str[100000];
	int inver[100505];
	char temp = getchar();
	int lenth = 0;
	while (temp != '\n') {
		str[lenth++] = temp;
		temp = getchar();
	}

	int n, left, right;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> left >> right;
		if (left > right) swap(left, right);
		inver[left - 1]++;
		inver[right]++;
	}
	int count = 0;
	for (int i = 0; i < lenth; i++) {
		count += inver[i];
		if (count % 2 == 1) str[i] = (isupper(str[i])) ? tolower(str[i]) : toupper(str[i]);
		cout << str[i];
	}
	return 0;
}*/