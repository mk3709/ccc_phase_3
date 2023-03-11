#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

#define mod 1e9
int find_maximum_value(int a[], int n)
{
	int sum = 0;
	int minimum = INT_MAX;
	int pos = 0, neg = 0;

	for (int i = 0; i < n; i++) {

		minimum = min(minimum, abs(a[i]));

		sum += abs(a[i]);
		if (a[i] >= 0)
			pos += 1;
		else
			neg += 1;
	}
	if (pos > 0 && neg > 0)
		return sum;

	return (sum - 2 * minimum);
}

int main()
{
	int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }

	int ans = find_maximum_value(a, n);
	if(ans<0) cout<<-1*ans<<endl;
	else cout<<ans<<endl;
    // cout<<ans<<endl;

	return 0;
}
