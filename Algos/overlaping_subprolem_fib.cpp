#include<bits/stdc++.h>

using namespace std;

int steps1 = 0;
int steps2 = 0;
int steps3 = 0;

int fib(int n){
	steps1++;
	if (n <= 1)
		return n;
	return fib(n-1) + fib(n-2); 
}

int fib_tab(int n){

	unordered_map <int, int> fib;
	fib[0] = 0;
	fib[1] = 1;

	if(fib[n] == 0 && n > 1){
		for(int i = 2;i<=n;i++){
			fib[i] = fib[i - 1] + fib[i - 2];
			steps2++;
		}
	}

	return fib[n];
}

int lookup[100];

int fib_memo(int n){


	cout << lookup[69] << endl;

	return 55;
}


int main(){

	int n = 10;
	
	// cout << "Solution1: " << fib(n) << "(" << steps1 << ")" << endl;
	// cout << "Solution2: " << fib_tab(n) <<"(" << steps3 << ")" << endl;
	cout << "Solution3: " << fib_memo(n) <<"(" << steps2 << ")" << endl;

	return 0;
}