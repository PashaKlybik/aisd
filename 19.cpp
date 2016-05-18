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


set<int> divides = { 1021, 1031, 1033, 1052651, 1054693, 1065023, 1087388483 };
set<int> num;

bool chek(int number, int pos) {
	return true;
}

int main()
{
	bool n1 = false, n2 = false, n3 = false;
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;

		if (a == 1021 || a / 1021 == 1031 || a / 1021 == 1033)
			n1 = true;

		if (a == 1031 || a / 1031 == 1021 || a / 1031 == 1033)
			n2 = true;

		if (a == 1033 || a / 1033 == 1021 || a / 1033 == 1031)
			n3 = true;
		if (a == 1087388483) {
			n1 = true;
			n2 = true;
			n3 = true;
		}
		

	}

	if (n1 && n2 && n3)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}