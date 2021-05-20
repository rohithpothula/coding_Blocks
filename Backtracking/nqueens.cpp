#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long int
#define ff first
#define ss second
#define S size()
#define mod (ll)(1e9 + 7)
#define mset(a, k) memset(a, k, sizeof(a))
#define fr(i, x, y) for (ll i = x; i < y; i++)
#define dr(i, x, y) for (ll i = x; i >= y; i--)
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define mapcl map<char, ll>
#define mapll map<ll, ll>
#define mapsl map<string, ll>
#define vi vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define psi pair<string, ll>
#define pii pair<ll, ll>
#define piii pair<ll, pii>
#define vii vector<pii>
#define vvi vector<vi>
#define vvii vector<vii>
using namespace std;
void fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//----------------------------------------FUNCTIONS-------------------------------------
const ll N = (ll)(1 * 1e6 + 5);
ll qcount;
bool isSafe(vector<vector<bool>>&grid, ll row, ll col, ll n)
{
	for (ll i = row - 1; i >= 0; i--)
	{
		if (grid[i][col])return false;
	}
	for (ll i = row - 1, j = col - 1; i >= 0 and j >= 0; i--, j--)
	{
		if (grid[i][j])return false;
	}
	for (ll i = row - 1, j = col + 1; i >= 0 and col < n; i--, j++)
	{
		if (grid[i][j])return false;
	}
	return true;
}
void displayGrid(vector < vector <bool>> &grid, ll n)
{
	fr(i, 0, n)
	{
		fr(j, 0, n)
		{
			if (grid[i][j])cout << "1 ";
			else cout << "0 ";
		}
		cout << '\n';
	}
	cout << '\n';
}
void Nqueen(vector < vector<bool> > &grid, ll curr_row, ll n)
{
	if (curr_row == n)
	{
		qcount++;
		displayGrid(grid, n);
		//exit(0);
		//return;
	}
	for (ll col = 0; col < n; col++)
	{

		if (isSafe(grid, curr_row, col, n))
		{
			grid[curr_row][col] = true;
			Nqueen(grid, curr_row + 1, n);
			grid[curr_row][col] = false;
		}
	}
}
void solve()
{
	ll n;
	cin >> n;

	vector < vector<bool>> grid(n, vector <bool>(n, false));
	qcount = 0;
	Nqueen(grid, 0, n);
	if (qcount == 0)displayGrid(grid, n);
}

signed main()
{
	fast();
#ifndef ONLINE_JUDGE
	freopen ("inp.txt", "r", stdin);
	freopen ("out.txt", "w", stdout);
#endif
	ll t = 1;
	cin >> t;
	fr(i, 0, t)
	{
		solve();
	}
}