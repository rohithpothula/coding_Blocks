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
class Complex {
	int a, b;
public:
	void setNumber(int n1, int n2)
	{
		a = n1;
		b = n2;
	}
	friend Complex sumcomplex(Complex c1, Complex c2);
	void printNumber()
	{
		cout << "your number is " << a << " + " << b << "i" << endl;
	}
};
Complex sumcomplex(Complex c1 , Complex c2)
{
	Complex c3;
	c3.setNumber(c1.a + c2.a , c1.b + c2.b);
	return c3;
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
		Complex c1, c2;
		c1.setNumber(5, 4);
		c2.setNumber(3, 5);

		c1.printNumber();
		c2.printNumber();
		Complex sum = sumcomplex(c1, c2);
		sum.printNumber();
	}
}