#include <iostream>
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
	int n, m, h, i, j;
	int arr[110][110];
	int check[2][10000] = { { 1 },{ 1 } };

	cin >> n >> m;
	for (i = 0; i <= 110; i++) {
		for (j = 0; j <= 110; j++) {
			if ((i <= n&&j <= m) && (i != 0 && j != 0))
				arr[i][j] = -1;
			else
			{
				arr[i][j] = -2;
			}
		}
	}

	arr[1][1] = 0;
	int mul = n*m;
	cin >> n >> m;
	i = 0;
	j = 1;
	while (arr[n][m] == -1 && i != j) {
		h = (arr[check[0][i]][check[1][i]]) + 1;

		if (check[0][i] - 2 > 0 && arr[check[0][i] - 2][check[1][i] + 1] == -1) {
			arr[check[0][i] - 2][check[1][i] + 1] = h ;
			check[0][j] = check[0][i] - 2;
			check[1][j] = check[1][i] + 1;
			j++;
		}
		if ((check[0][i] - 2 > 0 && check[1][i] - 1 > 0) && (arr[check[0][i] - 2][check[1][i] - 1] == -1)) {
			arr[check[0][i] - 2][check[1][i] - 1] = h;
			check[0][j] = check[0][i]-2;
			check[1][j] = check[1][i]+1;
			j++;
		}
		if (arr[check[0][i] + 2][check[1][i] + 1] == -1) {
			arr[check[0][i] + 2][check[1][i] + 1] = h;
			check[0][j] = check[0][i]+2;
			check[1][j] = check[1][i]+1;
			j++;
		}
		if ( check[1][i] - 1 > 0 && arr[check[0][i] + 2][check[1][i] - 1] == -1) {
			arr[check[0][i] + 2][check[1][i] - 1] = h;
			check[0][j] = check[0][i]+2;
			check[1][j] = check[1][i]-1;
			j++;
		}
		if (check[0][i] - 1 > 0  && arr[check[0][i] - 1][check[1][i] + 2] == -1) {
			arr[check[0][i] - 1][check[1][i] + 2] = h;
			check[0][j] = check[0][i]-1;
			check[1][j] = check[1][i]+2;
			j++;
		}
		if ((check[0][i] - 1 > 0 && check[1][i] - 2 > 0) && arr[check[0][i] - 1][check[1][i] - 2] == -1) {
			arr[check[0][i] - 1][check[1][i] - 2] = h;
			check[0][j] = check[0][i]-1;
			check[1][j] = check[1][i]-2;
			j++;
		}
		if (arr[check[0][i] + 1][check[1][i] + 2] == -1) {
			arr[check[0][i] + 1][check[1][i] + 2] = h;
			check[0][j] = check[0][i]+1;
			check[1][j] = check[1][i]+2;
			j++;
		}
		if (check[1][i] - 2 > 0 && arr[check[0][i] + 1][check[1][i] - 2] == -1) {
			arr[check[0][i] + 1][check[1][i] - 2] = h;
			check[0][j] = check[0][i]+1;
			check[1][j] = check[1][i]-2;
			j++;
		}
		i++;
	}
	if (arr[n][m] == -1) {
		cout << "NEVAR";
	}
	else
	{
		cout << arr[n][m];
	}
	return 0;
}
