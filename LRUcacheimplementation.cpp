#include <bits/stdc++.h>
#include <unordered_map>
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
class DLLNODE {
public :
	int key;
	int value;
	DLLNODE* next;
	DLLNODE* prev;
	DLLNODE(int key, int value)
	{
		this->key = key;
		this->value = value;
		this->prev = NULL;
		this->next = NULL;
	}
}
unordered_map<int, DLLNODE*> cache;
int size;
int capacity;
DLLNODE* head = new DLLNODE(-1, -1);
DLLNODE* tail = new DLLNODE(-1, -1);
void addNodeatHead(DLLNODE* node)
{
	node->prev = head;
	node->next = head->next;
	head->next->prev = node;
	head->next = node;
}
void removeNode(DLLNODE* node)
{
	node->prev->next = node->next;
	node->next->prev = node->prev;
}
int removefromtail()
{
	DLLNODE* temp = tail->prev;
	removeNode(temp);
	return temp->value;
}
void movetohead(DLLNODE* node)
{
	cout << "accessed the key" << endl;
	removeNode(node);
	addNodeatHead(node);
}
int get(int k)
{
	if (cache.count(k) == 0)
	{
		cout << "value not present" << endl;
		return INT_MAX;
	}
	DLLNODE* node = cache[k];
	movetohead(node);
	removeNode(node);
	return node->value;
}
void put(int k, int v)
{
	if (cache.count(k) != 0)
	{
		DLLNODE* node = cache[k];
		node->value = v;
		movetohead(node);
	}
	else
	{
		DLLNODE* node = new DLLNODE();
		node->key = k;
		node->value = v;
		if (size < capacity)
		{
			cache[k] = node;
			capacity++;
			addNodeatHead(node);
		}
		else
		{
			int removedkey = removefromtail();
			cache.erase(removedkey);
			addNodeatHead(node);
		}
	}
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
		cout << "enter size of cache" << endl;
		cin >> size;
		head->next = tail;
		tail->prev = head;
		int q;
		cin >> q;
		while (q--)
		{
			char ch;
			int k, v;
			cin >> ch;
			if (ch == 'p')
			{
				cin >> k >> v;
				put(k, v);
			}
			else
			{
				cin >> k;
				int v = get(k);
				cout << v  << "value for k is " << endl;
			}
		}
	}
}