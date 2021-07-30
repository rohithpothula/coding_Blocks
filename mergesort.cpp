#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define endl "\n"
# define str string
# define vll vector<ll>
# define pb push_back
# define mll map<ll,ll>
# define mp make_pair
# define ff first
# define ss second
# define pll pair<ll,ll>
# define f(x,y) for(int x=0;x<y;x++)
void merge(int a[], int left, int right)
{
	if (left >= right)
	{
		return ;
	}
	int mid = (left + right) / 2;
	merge(a, left, mid - 1);
	merge(a, mid + 1, right);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	//ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		int x = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			x = x ^ a[i];
		}
	}
}