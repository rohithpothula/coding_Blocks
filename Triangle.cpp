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
bool isright(int x1, int y1, int x2, int y2, int x3, int y3)
{
	int a = abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2);
	int b = abs(x3 - x2) * abs(x3 - x2) + abs(y3 - y2) * abs(y3 - y2);
	int c = abs(x1 - x3) * abs(x1 - x3) + abs(y1 - y3) * abs(y1 - y3);

	if ((a + b == c || b + c == a || c + a == b) and (a != 0 and b != 0 and c != 0))
	{
		return true;
	}
	else
		return false;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	//ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll t = 1;
	//cin>>t;
	while (t--)
	{
		int x1, x2, x3, y1, y2, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		int a = abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2);
		int b = abs(x3 - x2) * abs(x3 - x2) + abs(y3 - y2) * abs(y3 - y2);
		int c = abs(x1 - x3) * abs(x1 - x3) + abs(y1 - y3) * abs(y1 - y3);
		if (a + b == c || b + c == a || c + a == b)
		{
			cout << "RIGHT" << endl;
			return 0;
		}
		if (isright(x1 + 1, y1, x2, y2, x3, y3)) {
			cout << "ALMOST" << endl;
			return 0;
		}
		if (isright(x1, y1 + 1, x2, y2, x3, y3)) {
			cout << "ALMOST" << endl;
			return 0;
		}
		if (isright(x1, y1, x2 + 1, y2, x3, y3)) {
			cout << "ALMOST" << endl;
			return 0;
		}
		if (isright(x1, y1, x2, y2 + 1, x3, y3)) {
			cout << "ALMOST" << endl;
			return 0;
		}
		if (isright(x1, y1, x2, y2, x3 + 1, y3)) {
			cout << "ALMOST" << endl;
			return 0;
		}
		if (isright(x1 , y1, x2, y2, x3, y3 + 1)) {
			cout << "ALMOST" << endl;
			return 0;
		}
		if (isright(x1 - 1, y1, x2, y2, x3, y3)) {
			cout << "ALMOST" << endl;
			return 0;
		}
		if (isright(x1, y1 - 1, x2, y2, x3, y3)) {
			cout << "ALMOST" << endl;
			return 0;
		}
		if (isright(x1, y1, x2 - 1, y2, x3, y3)) {
			cout << "ALMOST" << endl;
			return 0;
		}
		if (isright(x1, y1, x2, y2 - 1, x3, y3)) {
			cout << "ALMOST" << endl;
			return 0;
		}
		if (isright(x1, y1, x2, y2, x3 - 1, y3)) {
			cout << "ALMOST" << endl;
			return 0;
		}
		if (isright(x1, y1, x2, y2, x3, y3 - 1)) {
			cout << "ALMOST" << endl;
			return 0;
		}


		cout << "NEITHER" << endl;
	}
}