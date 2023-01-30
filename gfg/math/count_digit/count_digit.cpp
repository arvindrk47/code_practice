//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int n){
        int counter = 0;
        int original = n;
        int last_digit ;
        while(n>0)
        {
            last_digit = n%10;
            n = n/10;
            //check lastdigit should not be zero and divide the original number
            if(last_digit>0 && original%last_digit==0)counter++;
        }
        
        return counter;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends