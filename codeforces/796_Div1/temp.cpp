#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; 
    cin >> n; 
    vector<int> freq(10, 0);
    while(n > 0) {
        freq[n%10]++;
        n /= 10; 
    }

    for(int i=0; i<10; ++i) {
        if(i != 4 && freq[i] > 0 && i != 7 && freq[i] > 0) {
            cout << "NO" << endl; 
            return; 
        }
    }

    cout << "YES" << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout << fixed;
    #ifdef INPUT  
        freopen("temp.in","r",stdin);
        clock_t time_req; cout << endl;
 
    #endif 
 
    solve();
 
    #ifdef INPUT    
 
        cout << endl << endl;
        time_req = clock();
        cout << "Processor time taken : " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl << endl; 
    #endif
 
    return 0;
}
 
// g++ a.in _DINPUT; ./a,out
// g++ -g -fsanitize=address -Wall -Wextra -pedantic -O2 a.cpp -DINPUT; ./a.out