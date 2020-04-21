#include <iostream> 
using namespace std;
int main() 
{ 
    int t;
    cin >> t;
    while(t> 0) {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        for(int i =0 ;i < n ;i++) {
            cin >> arr[i];
        }
        for(int i =0 ;i < n ;i++) {
            for (int j = i+1; j < n; j++)
            {
                if(abs(arr[j]- arr[i])>1){
                    sum += arr[j]-arr[i];
                }
            }
        }
        cout << sum << endl;
        t--;
    }
    return 0; 
} 