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
struct TreeNode
{
	int data;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int data)
	{
		this->data = data;
		this->left = left;
		this->right = right;
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
		TreeNode* n = new TreeNode(6);
		cout << n->data << endl;
	}
}