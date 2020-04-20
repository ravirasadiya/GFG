#include <climits> 
#include <iostream> 
using namespace std; 
  
int partition(int arr[], int l, int r); 
  
// This function returns k'th smallest element in arr[l..r] using 
// QuickSort based method.  ASSUMPTION: ALL ELEMENTS IN ARR[] ARE DISTINCT 
int kthSmallest(int arr[], int l, int r, int k) {
    if(k > 0 && k <= r - l + 1) {
        int pos = partition(arr,l,r);

        if(pos - l == k - 1)
            return arr[pos];
        
        if(pos - l > k -1) 
            return kthSmallest(arr, l, pos-1 , k);

        return kthSmallest(arr, pos+1, r , k - pos + l -1);
        
    }

    return INT_MAX;
}

void swap(int* a,int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r) {
    int x = arr[r],i=l;
    for(int j = l; j<= r -1;j++) {
        if(arr[j] <= x) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i],&arr[r]);
    return i;
}  
// Driver program to test above methods 
int main() 
{ 
    int arr[] = {17,37,14,46,52,88,97,7,3,45,49,77,66,11,33,22,87}; 
    int n = sizeof(arr) / sizeof(arr[0]), k = 7; 
    cout << "K'th smallest element is " << kthSmallest(arr, 0, n - 1, k); 
    return 0; 
} 