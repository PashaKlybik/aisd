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


using namespace std;

int main()
{
	long long n;
	cin >> n;
	if (n % 10 == 0) {
		cout << "NO";
	}
	else {
		cout << n % 10;
	}
	
return		0;
}