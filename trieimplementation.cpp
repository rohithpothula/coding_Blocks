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
class Trie
{
public:
	map<int, Trie*> child;
	bool isEnd;
	Trie()
	{
		// memset(child, NULL , sizeof(child));
		this->isEnd = false;
	}
};
Trie* root = new Trie();
void insert(string s)
{
	Trie* curr = root;
	for (int i = 0; i < s.size(); i++)
	{
		int idx = s[i] - 'a';
		if (curr->child[idx] == NULL)
		{
			curr->child[idx] = new Trie();
		}
		curr = curr->child[idx];
	}
	curr->isEnd = true;
}
bool search(string s)
{
	Trie* curr = root;
	for (int i = 0; i < s.size(); i++)
	{
		int idx = s[i] - 'a';
		if (curr->child[idx] == NULL)
		{
			return false;
		}
		else
		{
			curr = curr->child[idx];
		}
	}
	return curr->isEnd;
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
		string s;
		cin >> s;
		insert(s);
	}
	string st;
	cin >> st;
	if (search(st))
	{
		cout << "present" << endl;
	}
	else
	{
		cout << "not present" << endl;
	}
}