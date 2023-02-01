//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int num){
        // code here
         int d1 = num % 10;
         int d2 = (num / 10) % 10;
         int d3 = num / 100;
         return (d1 * d1 * d1 + d2 * d2 * d2 + d3 * d3 * d3) == num ? "Yes" : "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends