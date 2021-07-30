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
int findminvertex(bool visited[], int dist[], int n)
{
	int minvertex = 0;
	for (int i = 0; i < n; i++)
	{
		if (!visited[i] and dist[i] < dist[minvertex])
		{
			minvertex = i;
		}
	}
	return minvertex;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	//ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll t = 1;
	// cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector <pair <int, int>> adj[1000];
		int e;
		cin >> e;
		for (int i = 0; i < e; ++i)
		{
			int x;
			int y;
			int w;
			cin >> x >> y >> w;
			adj[x].push_back({y, w});
			adj[y].push_back({x, w});
		}
		bool visited[1000] = {false};
		int dist[1000] = {INT_MAX};
		dist[0] = 0;
		visited[0] = true;
		map<int, int> m;
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			int minvertex = findminvertex(visited, dist, n);
			cout << minvertex << " ";
			visited[minvertex] = true;
			for (int j = 0; j < adj[i].size(); j++)
			{
				if (dist[minvertex] + adj[i][j].second <= dist[adj[i][j].first] and !visited[adj[i][j].first])
				{
					dist[adj[i][j].first] = dist[minvertex] + adj[i][j].second;
				}
			}
		}
		for (int i = 1; i < n; i++)
		{
			cout << dist[i] << " ";
		}
		cout << endl;
	}
}