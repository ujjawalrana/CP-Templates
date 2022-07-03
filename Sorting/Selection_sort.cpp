// we consider that the array is sorted from 0 to ith position
// and we need to sort the array from i+1 to n.

// This implementation is not stable
// Stable means order of same element will not maintain

// TIme - O(n^2)
// Space - O(1)

void selectionSort(vector<int>&a,int n){
    
   for(int i=0;i<n;i++){
        int mn=i; // considering the ith element is minimum element 
       
        for(int j=i+1;j<n;j++){
            // finding that is there any element from i+1 to n which is smaller than a[i] 
            // So we need to find the smaller element which is smaller than a[i] if present.
            
            if(a[j]<a[mn]){
                mn=j; 
            }
        }
        swap(a[i],a[mn]);
    }
    
}
