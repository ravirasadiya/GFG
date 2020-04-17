#include <iostream>
#include<algorithm> 
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
        k = nums.size() - k - 1;
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
	    vector<int> v;
	    for(int i =0 ;i <n;i++) {
            int value;
	        cin >> value;
            v.push_back(value);
	    }
	    rotate(v,d-1);
	    for(int j = 0 ; j < n ; j++) {
            cout << v[j] << " ";
        }
	    cout << endl;
	    T--;
	}
	return 0;
}