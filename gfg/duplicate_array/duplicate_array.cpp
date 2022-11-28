// Online C++ compiler to run C++ program online
// How to find the duplicate element in the array
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[100];
    int n;
    cin>>n;
    for(int i=1; i<n; i++){
        cin>>arr[i];
    }
    
    
    for(int i=1; i<n; i++){
        for(int j=i+1; j<=n; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<endl;
            }
        }
    }

    return 0;
}
