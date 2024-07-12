//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int search(int arr[],int i,int j,int K){
        int x=(int)ceil((i+j)/2);
        if(i>j){
            return -1;
        }
        if(arr[x]==K){
            return 1;
        }else if(arr[x]>K){
            return search(arr,i,x-1,K);
        }else{
            return search(arr,x+1,j,K);
        }
    }
    
    int searchInSorted(int arr[], int N, int K) 
    { 

        return search(arr,0,N-1,K);
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends