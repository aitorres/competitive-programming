/**
 * 4B. Before an Exam
 * https://codeforces.com/contest/4/problem/B
 *
 * @author: Andrés Ignacio Torres
 *          (@aitorres on Github)
 *          (@andresitorresm on Twitter)
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <list>
#include <stack>
#include <set>
#include <numeric>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)

using namespace std;

int main(int argc, char const *argv[])
{
	int d, sumTime;
	scanf("%i %i", &d, &sumTime);
	int minTime[d];
	int maxTime[d];
	int tMin = 0, tMax = 0;
	FOR(i, 0, d, 1) {
		scanf("%i %i", &minTime[i], &maxTime[i]);
		tMin += minTime[i];
		tMax += maxTime[i];
	}
	if (!((tMin <= sumTime && sumTime <= tMax))) {
		printf("NO\n");
		return 0;
	}
	printf("YES\n");
	int v = 0, i = 0;
	int sol[d];
	FOR(i, 0, d, 1) {
		sol[i] = 0;
	}
	while (sumTime > 0) {
		if (!v) {
			sol[i] += minTime[i];
			sumTime -= minTime[i];
		} else if (maxTime[i] - sol[i] >= 1) {
			sol[i] += 1;
			sumTime -= 1;
		}
		i += 1;
		if (!v && i == d) {
			v = 1;
		}
		i %= d;
	}
	FOR(i, 0, d, 1) {
		printf("%i ", sol[i]);
	}
	printf("\n");
	return 0;
}
