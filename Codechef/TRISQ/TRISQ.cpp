#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int b; cin >> b;
    cout << int(pow(b-4, 2) / 4) << endl;   
}
 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout << fixed;
    #ifdef INPUT  
        freopen("TRISQ.in","r",stdin);
        clock_t time_req; cout << endl;
 
    #endif 
 
    int test_case; 
    cin >> test_case;
    while(test_case--) {
        solve();
    }

    #ifdef INPUT    
 
        cout << endl << endl;
        time_req = clock();
        cout << "Processor time taken : " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl << endl; 
    #endif
 
    return 0;
}

// g++ a.in -DINPUT; ./a,out
// g++ -g -fsanitize=address -Wall -Wextra -pedantic -O2 a.cpp -DINPUT; ./a.out