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
	string str;
	cin >> str;
	bool check = true;
	for (int i = 0, j = str.length()-1; i <= j; i++, j--) {
		if (str[i] != str[j]) {
			cout << str.length();
			return 0;
		}
		if (str[i] != str[0]) {
			check = false;
		}
	}
	if (check) {
		cout << "-1";
	}
	else {
		cout << str.length() - 1;
	}

	return		0;
}*/