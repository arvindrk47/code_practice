#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
	    int a,b;
	    cin>>a>>b;
	    if(a>b){
	        cout<<a-b<<endl;
	    }
	    else{
	        cout<<b-a<<endl;
	    }
	}
	return 0;
}
