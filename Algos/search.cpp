#include<bits/stdc++.h>

#define vi vector<int>
#define all(x) (x).begin(), (x).end()

using namespace std;


void liner_search(vi v, int key){
	bool flag = false;
	for(int x:v)
		if(key == x){
			flag = true;break;
		}
	(flag)?cout << "Found": cout << "Not Found";
	cout << endl;
}

void binary_search(vi v, int key){

	bool flag = false;
	int l = 0;
	int r = v.size() - 1;

	if(v[r] == key){
		flag = true;
	}
	else{
		while(l <= r){

			int mid = l + (r - l)/2;
			if(v[mid] == key){
				 flag = true;
				 break;
			}else if(v[mid] < key){
				l = mid + 1;
			}else if(v[mid] > key){
				r = mid - 1;
			}
		}
	}

	(flag)?cout << "Found": cout << "Not Found";
	cout << endl;
}

int sqrt(){
	
}

void jump_search(vi v, int key){
	int n = v.size();
	int step = sqrt(n);



}


int main(){

	vi v = {10, 20, 12, 23, 65, 23, 59, 98, 99, 1};
	int key = 1;

	// liner_search(v, key);
	binary_search(v, key);

	return 0;
}