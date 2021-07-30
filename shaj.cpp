#include <bits/stdc++.h>
using namespace std;
# define ll long long
// # define endl "\n"
// # define str string
// # define vll vector<ll>
// # define pb push_back
// # define mll map<ll,ll>
// # define mp make_pair
// # define ff first
// # define ss second
// # define pll pair<ll,ll>
// # define f(x,y) for(int x=0;x<y;x++)
int minRev(vector<vector<int> > edges,
           int n)
{
	unordered_map<int, vector<int> > graph;
	unordered_map<int, vector<int> > graph_rev;

	for (int i = 0;
	        i < edges.size(); i++) {

		int x = edges[i][0];
		int y = edges[i][1];
		graph[x].push_back(y);
		graph_rev[y].push_back(x);
	}

	queue<int> q;


	vector<int> visited(n, 0);
	q.push(0);


	int ans = 0;


	while (!q.empty()) {


		int curr = q.front();


		visited[curr] = 1;

		int count = 0;
		q.pop();


		for (int i = 0;
		        i < graph_rev[curr].size();
		        i++) {

			if (!visited[graph_rev[curr][i]]) {
				q.push(graph_rev[curr][i]);
			}
		}
		for (int i = 0;
		        i < graph[curr].size();
		        i++) {

			if (!visited[graph[curr][i]]) {
				q.push(graph[curr][i]);
				count++;
			}
		}
		ans += count;
	}
	return ans;
}
int main() {
// #ifndef ONLINE_JUDGE
// 	freopen ("input.txt", "r", stdin);
// 	freopen ("output.txt", "w", stdout);
// #endif
	//ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll t = 1;
	// cin>>t;
	while (t--)
	{
		int n;
		cin >> n;
		int s;
		cin >> s;
		// vector <int> adj[n + 1];
		vector<vector<int> > adj;
		for (int i = 0; i < n - 1; i++)
		{
			int x;
			int y;
			cin >> x >> y;
			adj[x].push_back(y);
		}
		cout << minRev(adj, n) << endl;
	}
	return 0;
}