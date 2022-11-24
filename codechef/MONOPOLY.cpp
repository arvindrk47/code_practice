#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b,c,d;
	    cin>>a>>b>>c;
	    if((a+b)<c || (b+c)<a || (c+a)<b){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
