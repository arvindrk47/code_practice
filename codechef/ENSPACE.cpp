#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for (int i=0; i<n; i++){
	    int a, b, c,d;
	    cin>>a;
	    cin>>b;
	    cin>>c;
	    d=b+(c*2);
	    if(d>a){
	        cout<<"No\n";
	    }
	    else{
	        cout<<"Yes\n";
	    }
	    
	}
	return 0;
}
