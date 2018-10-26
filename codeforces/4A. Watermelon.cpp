/**
 * 4A. Watermelon
 * https://codeforces.com/contest/4/problem/A
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
	int i;
	scanf("%i", &i);
	printf((i != 2) && (i % 2 == 0) ? "YES\n" : "NO\n");
	return 0;
}