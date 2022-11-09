#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    
    while(n--){
        int x,y=0;
        cin>>x;
        int arr[x];
        for(int i=0; i<x; i++){
            cin>>arr[i];
        }
        for(int i=0; i<x; i++){
            if(arr[i]>=1000){
                y++;
            }
        }
     cout<<y<<endl;
    }
    return 0;
}
