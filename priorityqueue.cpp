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
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	//ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		priority_queue<int> pq;//this is the declaration for max heap,max element will be at top
		priority_queue< int , vector<int> , greater<int> > pr;//this is the declaration for min heap,min element will be at top
		pq.push(100);
		pq.push(89);
		pq.push(88);
		pq.push(100000);
		pq.push(100000000);

		pr.push(100);
		pr.push(89);
		pr.push(88);
		pr.push(100000);
		pr.push(100000000);
		cout << pq.top() << endl;
		cout << pr.top() << endl;
		// and we can access this same like we do for queue and stacks
	}
}