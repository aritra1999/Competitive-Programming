#include<bits/stdc++.h>

#define vi vector<int>
#define all(x) (x).begin(), (x).end()

using namespace std;

void print_array(vi v){
	sort(all(v));

	cout << "Size: " << v.size() << "\nArray : ";
	for(int x:v){
		cout << x << "  ";
	}

	cout << endl;
}

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
	sort(all(v));

	int l = 0, r = v.size() - 1;
	bool flag = false;

	if(v[r] == key)
		flag = true;
	else{
		while(l <= r){
			int mid = l + (r - l)/2;
			if(v[mid] == key){
				 flag = true;
				 break;
			}
			else if(v[mid] < key)
				l = mid + 1;
			else if(v[mid] > key)
				r = mid - 1;
		}
	}

	(flag)?cout << "Found": cout << "Not Found";
	cout << endl;
}

void jump_search(vi v, int key){
	sort(all(v));

	int n = v.size(), low = 0; step = sqrt(n);
	bool flag = false;

	while(v[step] < key && step < n){
		low = step;
		if(step >= n)break;
		step += step;			
	}

	for(int i=low;i<low+step;i++){
		if(v[i] == key){
			flag = true;
			break;
		}
	}

	(flag)?cout << "Found": cout << "Not Found";
	cout << endl;
}

void interpolation_search(vi v, int key){

	int n = v.size();
	bool flag = false; 

	int lo = 0, hi = n-1;

	while(lo < hi && arr[low] >= key && key <= arr[hi]){
		if(hi == lo){
			if(arr[lo] == key){
				flag = true;
			}else{ 
				flag = false;
			}
			break;
		}

		
		
	}

}

int main(){

	vi v = {10, 20, 12, 23, 65, 23, 59, 98, 99, 1};
	int key = 100;

	print_array(v);

	// liner_search(v, key);
	// binary_search(v, key)
	// jump_search(v, key);
	interpolation_search(v, key);	

	return 0;
}