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
bool flag;
class trie {
public:
	map<char, trie*> child;
	bool isEnd;
	trie()
	{
		this->isEnd = false;
	}
};
trie* root;
void insert(string s)
{
	trie* curr = root;
	for (int i = 0; i < s.length(); i++)
	{
		char idx = s[i];
		if (curr->child[idx] == NULL)
		{
			curr->child[idx] = new trie();
		}
		else
		{
			if (curr->isEnd == true)
			{
				flag = true;
				break;
			}
		}
		curr = curr->child[idx];
	}
	cout << endl;
	curr->isEnd = true;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	//ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin >> t;
	flag = false;
	root = new trie();
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			string s;
			cin >> s;
			insert(s);
		}
		if (flag)
		{
			cout << "inconsistent" << endl;
		}
		else
		{
			cout << "consistent" << endl;
		}
	}
}