// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int count(int S[], int n, int m) {

        long long int dp[n+1][m+1];
        for(int j=0;j<m+1;j++)
        dp[0][j]=0;
        
        for(int i=0;i<n+1;i++)
        dp[i][0]=1;
        
        
        
        for(int i=1;i<n+1;i++)
        {
           for(int j=1;j<m+1;j++)
           {
               if(S[i-1]<=j)
               {
                   dp[i][j]= dp[i-1][j]+dp[i][j-S[i-1]];
               }
               else{
                   dp[i][j]= dp[i-1][j];
               }
           }
       }
    return dp[n][m];    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends
