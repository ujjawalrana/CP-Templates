// Time - O(n^2). WORST CASE - array sorted in reverse order
// Space - O(1)

// Time - O(n) BEST CASE - when array is already sorted
// Space - O(1)

// Use when the array is partially sorted

void insertionSort(vector<int>&a, int n){
    
    for(int i=1;i<n;i++){
        int temp=a[i];
        
        int j=i-1;
        while(j>=0 and a[j]>a[i]){
            a[j+1]=a[j];
            j-=1;
        }
        a[j+1]=temp;
    }
}
