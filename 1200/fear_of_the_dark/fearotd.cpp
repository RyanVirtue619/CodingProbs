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
long double Px, Py, Ax, Ay, Bx, By;
int32_t main() 
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //Start coding
    ll t;
    cin >> t;
    while(t--) {
        ll ans = 0;
        cin >> Px >> Py >> Ax >> Ay >> Bx >> By;
        long double Adist, Bdist;
        Adist = sqrt(pow(Ax, 2) + pow(Ay, 2));
        Bdist = sqrt(pow(Bx, 2) + pow(By, 2));
        long double PAdist, PBdist;
        PAdist = sqrt(pow(Px-Ax,2) + pow(Py-Ay,2));
        PBdist = sqrt(pow(Px-Bx,2) + pow(Py-By,2));
        long double circDist;
        circDist = sqrt(pow(Ax-Bx, 2) + pow(Ay-By, 2));
        if((Adist <= Bdist && PAdist <= PBdist) || (Bdist > Adist && PBdist > PAdist)) {
            
        } else {

        }

    }
}