#include <iostream>
#include <array>
using namespace std;

void rotate(vector<int>& nums, int k) {
        k %=nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }

int main() {
	//code
	int T;
	cin >> T;
	while(T>0) {
	    int n,d;
	    cin >> n >> d;
	    int a[n];
	    for(int i =0 ;i <n;i++) {
	        cin >> a[i];
	    }
	    leftrotateArray(a, n, d);
	    printarray(a, n);
	    cout << endl;
	    T--;
	}
	return 0;
}