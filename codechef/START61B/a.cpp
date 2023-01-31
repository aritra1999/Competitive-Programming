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
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

int lcs(string X, string Y, int m, int n ) { 
    if (m == 0 || n == 0) 
        return 0; 
    if (X[m-1] == Y[n-1]) 
        return 1 + lcs(X, Y, m-1, n-1); 
    else
        return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n)); 
} 

void solve() {
    int n; 
    cin >> n; 
    string a, b;  cin >> a >> b;
    cout << lcs(a, b, n, n);
    
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    #ifdef INPUT  
        freopen("a.in","r",stdin);
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

