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
struct Node
{
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
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
		Node *head = new Node(1);
		cout << head->data;
	}
}