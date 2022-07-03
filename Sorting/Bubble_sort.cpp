// Time - O(n^2) Worst case
// Space - O(1)

// In the worst case array will be sorted in decreasing order
// So total passes required are 'n-1'
// In the first pass we need 'n-1' comparision and swap
// In the second pass we need 'n-2' comparision and swap 
// So we need 'n*(n-1)/2' comparision and swap in worst case

// Time - O(n) best case when array is already sorted
// This is Stable sorting algorithm
//  in-place algorithm.

// we have taken a is_swap bool variable 
// It can be optimized by stopping the algorithm if the inner loop didn’t cause any swap. when array is already sorted

void bubbleSort(vector<int>&a, int n){
    
    bool is_swap=false;
    
    for(int i=0;i<n-1;i++){
        
        is_swap=false;
        
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                is_swap=true;
            }
        }
        
        if(!is_swap) break;
    }
}
