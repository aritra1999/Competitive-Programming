#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ld long double
#define TAB << "\t" << 
#define vll vector<ll> 
#define vi vector<int> 
#define pi pair<int,int> 
#define vs vector<string> 
#define vp  vector < pair<int, int> > 
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define mem(a,b) memset(a,b,sizeof(a))
#define sza(x) ((int)x.size())
#define MOD 1000000007
#define MAXSIZE 26

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef INPUT
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void solve() {
    unsigned long long int a, b; cin >> a >> b;
    if(b%a == 0){cout << "YES"; return;}
    
    cout << ((b < a*2) ? "NO" : "YES");
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    #ifdef INPUT  
        freopen("b.in","r",stdin);
        clock_t time_req; 
        cout << endl;
        
    #endif 

    int testCase;
    cin >> testCase;
	
    while(testCase--){
	   solve();
       cout << endl;
    }

    #ifdef INPUT
        
        cout << endl << endl;
        time_req = clock();
        cout << "Processor time taken : " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl << endl; 
    #endif
    return 0;
}

