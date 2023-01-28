// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int size =5;
    for(int i=0; i<size; i++){
        for(int j=0; j<=i; j++){
            cout<<j+1;
        }
        cout<<"\n";
    }

    return 0;
}

/*
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void star(int n){
    for(int i=0; i<=5; i++){
        
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        
        cout<<endl;
    }
}

int main() {
    // Write C++ code here
    int a;
    cin>>a;
    star(a);
    return 0;
}
*/