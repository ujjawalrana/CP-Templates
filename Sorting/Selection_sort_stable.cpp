// Input : 4A 5 3 2 4B 1
// Unstable Output : 1 2 3 4B 4A 5
// Stable Output : 1 2 3 4A 4B 5

// If we are at ith element then we will find the smaller element from i+1 to n and store the position in 'mn' pointer
// if a[i]>a[mn] then Insert a[mn] to its correct place and shift the elemnt by one position to right.

// This is stable Selection sort, the order is maintain of same element

// Time - O(n^2)
// Space - O(1)

void selectionSort(vector<int>&a,int n){
    
    for(int i=0;i<n-1;i++){
        int mn=i; 
        
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mn]){
                mn=j;
            }
        }
        
        int temp=a[mn];
        while(mn>i){
            a[mn]=a[mn-1];
            mn--;
        }
        
        a[i]=temp;
    }

}
