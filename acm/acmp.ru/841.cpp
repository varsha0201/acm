#include <bits/stdc++.h>

using namespace std;

#define se second
#define sz size()
#define mp make_pair
#define pb push_back
#define int long
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const double PI = acos(-1.0);
const int inf = int(1e9) + 7;

int binpow(int a, int n){
	int res = 1;
	while(n){
		if(n & 1){
			res *= a;
			--n;
		}
		else{
			a *= a;
			n >>= 1;
		}
	}
	return res;
}


set<int>s1, s2;
vector<int>v1, v2;


signed main(){
	int n;
	cin >> n;
	cout << binpow(2, n);

	return 0;
}
