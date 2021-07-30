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
int main() {
	//ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		int sum;
		cin >> sum;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}



		sort(a, a + n);



		for (int i = 0; i < n; i++)
		{
			int diff = sum - a[i];
			int j = i + 1;
			int k = n - 1;
			int temp = 0;
			while (j < k)
			{
				if (a[j] + a[k] == diff)
				{
					cout << "yes the sum is found" << endl;
					cout << a[i] << " " << a[j] << " " << a[k];
					cout << endl;
					// return 0;
				}
				else if (a[j] + a[k] > diff)
				{
					k--;
				}
				else
				{
					j++;
				}
			}
		}
	}
}