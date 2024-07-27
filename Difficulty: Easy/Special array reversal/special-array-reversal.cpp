//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        //code here.
        /*int count=0;
        for(int i=0;i<str.size();i++){
            if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z'){
                count++;
            }
        }
        
        int i=0,j=str.size()-1;
        for(int x=0;x<count;){
            if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z'){
                while(str[j]<'A' && str[j]>'Z' || str[i]<'a' && str[i]>'z'){
                    j--;
                }
                swap(str[i],str[j]);
                x++;
                j--;
            }
            i++;
        }
        return str;*/
        
        int i=0,j=str.size()-1;
        while(i<j){
            while((i<j) && !(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')){
                i++;
            }
            while((i<j) && !(str[j]>='A' && str[j]<='Z' || str[j]>='a' && str[j]<='z')){
                j--;
            }
            if(i<j){
                swap(str[i],str[j]);
                i++;
                j--;
            }
        }
        return str;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends