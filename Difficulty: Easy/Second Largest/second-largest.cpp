//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int small1=arr[0],small2=INT_MAX,large1=arr[0],large2=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]<small1 ){
                small1=arr[i];
            }
            if(arr[i]>large1){
                large1=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]<small2 && arr[i]!=small1){
                small2=arr[i];
            }
            if(arr[i]>large2 && arr[i]!=large1){
                large2=arr[i];
            }
        }
        if(large2==INT_MIN ){large2=-1;}
        if(small2==INT_MAX ){small2=-1;}
        return large2;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends