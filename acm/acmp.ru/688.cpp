#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define fi first
#define se second
#define sz size()
#define mp make_pair
#define int long
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const double PI = acos(-1.0);
const int inf = int(1e9) + 7;
using namespace std;

signed main(){
    faster;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int n;
    cin >> n;
    int a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        double sus = sqrt(abs(x1 - a)* abs(x1 - a) + abs(y1 - b)*abs(y1 - b));
        double sob = sqrt(abs(x2 - a)* abs(x2 - a) + abs(y2 - b)*abs(y2 - b));
        double  soba = sob / 2;
        if( soba  > sus ){
            cout << i + 1;
            return 0;
        }
    }


    cout << "NO";
    return 0;
}