
// generating a unordered list of array numbers;

#include<iostream>

#define MAX 100
using namespace std;

int main(){
    
    int n;
    int arr[MAX];
    cout<<"Enter the NUmber";
    
    cin>>n;
    
    for(int i=0; i<n; i++){
        arr[i] = rand();
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    return 0;
}