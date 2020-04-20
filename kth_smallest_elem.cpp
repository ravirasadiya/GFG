#include <climits> 
#include <iostream> 
using namespace std; 
  
int partition(int arr[], int l, int r); 
  
// This function returns k'th smallest element in arr[l..r] using 
// QuickSort based method.  ASSUMPTION: ALL ELEMENTS IN ARR[] ARE DISTINCT 
int kthSmallest(int arr[], int l, int r, int k) 
{ 
    
}
  
// Driver program to test above methods 
int main() 
{ 
    int arr[] = {17,37,14,46,52,88,97,7,3,45,49,77,66,11,33,22,87}; 
    int n = sizeof(arr) / sizeof(arr[0]), k = 7; 
    cout << "K'th smallest element is " << kthSmallest(arr, 0, n - 1, k); 
    return 0; 
} 