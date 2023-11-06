#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<string> vs;

int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //Start coding
    ll t;
    cin >> t;
    while(t--) {
        ll n, x, y;
        cin >> n >> x >> y;
        ll xdivs = floor(n/x);
        ll ydivs = floor(n/y);

        ll shared = floor(n/(x*y/gcd(x,y)));
        //cout << shared << " ";
        xdivs -= shared;
        ydivs -= shared;
        //cout << xdivs << " " << ydivs << " ";
        ll ypor;
        ll xpor;
        if(xdivs > 1) {
            xpor = (n-xdivs+1) + n;
            if(xdivs%2==0) {
                xpor *= (xdivs/2);
            } else {
                xpor = (xpor*floor(xdivs/2)) + (xpor/2);
            }
        } else {
            xpor = n*xdivs;
        }
        if(ydivs > 1) {
            ypor = ydivs + 1;
            if(ydivs%2==0) {
                ypor *= ydivs/2;
            } else {
                ypor = (ypor*floor(ydivs/2)) + (ypor/2);
            }
        } else {
            ypor = 1*ydivs;
        }
        //cout << xdivs << " " << ydivs << " " << xpor << " " << ypor << " ";
        cout << xpor - ypor << endl;
    }
}