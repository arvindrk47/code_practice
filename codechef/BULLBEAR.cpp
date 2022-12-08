#include <iostream>
using namespace std;
// Codechef problems

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    if(a<b){
	        cout<<"PROFIT"<<endl;
	    }else if(a>b){
	        cout<<"LOSS"<<endl;
	    }else{
	        cout<<"NEUTRAL"<<endl;
	    }
	}
	return 0;
}
