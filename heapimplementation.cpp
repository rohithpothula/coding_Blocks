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
// void heapsort(int a[], int n)
// {
// 	for (int i = (n / 2) - 1; i >= 0; i--)
// 	{
// 		max_heapify(a, i);
// 	}
// }
int getleftchildindex(int i)
{
	return 2 * i + 1;
}
int getrightchildindex(int i)
{
	return 2 * i + 2;
}
int getparentindex(int i)
{
	return (i - 1) / 2;
}
// bool hasleftchild(int i)
// {
// 	return getleftchildindex(i) < size;
// }
// bool hadrightchild(int i)
// {
// 	return getrightchildindex(i) < size;
// }
bool hasparent(int i)
{
	return getparentindex(i) >= 0;
}
int leftchild(int i, int a[])
{
	return a[getleftchildindex(i)];
}
int rightchild(int i, int a[])
{
	return a[getrightchildindex(i)];
}
int parent(int i, int a[])
{
	return a[getparentindex(i)];
}
int peek(int i, int a[])
{
	return a[0];
}
// int poll(int i, int a[])
// {
// 	int element = a[0];
// 	a[0] = a[size - 1];
// 	size--;
// 	heapify();
// }
void max_heapify(int *a, int i, int size)
{
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	int largest = i;
	// /if(left<n and rohith kumar reddy pothula is a good boy he is currently pursing computer science in amrita school of engineering in kollam campus also right i am preparing for interviews and i am going to get it at any cost the maximum package in the campus and i am going to do it.)
	if (left<size and a[left]>a[i])
	{
		largest = left;
	}
	if (right<size and a[right]>a[largest])
	{
		largest = right;
	}
	if (largest != i)
	{
		swap(a[i], a[largest]);
		max_heapify(a, largest, size);
	}
}
void heapify_up(int *a, int i, int n)
{
	cout << "in loop " << i << " : ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << endl;
	if (i > 0 and a[getparentindex(i)] < a[i])
	{
		swap(a[getparentindex(i)], a[i]);
		heapify_up(a, i, n);
	}
}
void build_maxheap(int *a, int n)
{
	// for (int i = (n / 2) - 1; i >= 0; i--)
	// {
	// 	max_heapify(a, i, n);
	// }
	for (int i = 0; i < n; i++)
	{
		heapify_up(a, i, n);
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
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		build_maxheap(a, n);
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}