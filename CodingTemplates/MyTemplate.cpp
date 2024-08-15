//striverz
#include<bits/stdc++.h>
#define mod 100000007
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define eb emplace_back
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define int long long int
#define pi 3.141592653589793238462
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define printv(v) {for(auto x:v) cout<<x<<" "; cout<<endl;}
#define printm(m) {for(auto x:m) cout<<x.first<<":"<<x.second<<endl;}
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
void yes() { cout<<"YES\n"; } void no() { cout<<"NO\n"; }
bool prime(int a) { if (a<=1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
#define read(type) readInt<type>()
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int getRandomNumber(int l, int  r) {return uniform_int_distribution<int>(l, r)(rng);} 


void Solve(){
	cout<<"Hello World!";
    
}
int32_t main(){fast_io; int ttt=1;
cin>>ttt;
for(int i=1;i<=ttt;i++){Solve(); }}
