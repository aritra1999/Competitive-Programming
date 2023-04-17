#include <bits/stdc++.h>

using namespace std;

int isValid(int x) {
    return floor(log2(x)) == ceil(log2(x));
}

int main() {
    vector<int> temp = {1, 2, 4, 5, 7, 8};
    
    // [2, 1, 3] 
    // [2], [1], [3, 1] 
    // [1], [2], [1, 3]
    vector<vector<int>> ans; 
    vector<int> a = {2, 1, 3};
    int n = a.size(); 
    vector<int> prefix(n+1);
    prefix[0] = 0;
    
    for(int i=0; i<n;i++) prefix[i] = prefix[i-1] + a[i];
    
    int start = 0;
    for(int i=1; i<n; i++) {
        if(isValid(prefix[i] - prefix[start])) {
            cout << "Debug: " << a[i-1] << " " << start << " " << i << endl;
            vector<int> temp; 
            for(int j=start; j<i; j++) {
                temp.push_back(a[j]);
            }
            start = i; 
            ans.push_back(temp);
        }
    }
    
    for(vector<int> x: ans) {
        for(int y: x) {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}