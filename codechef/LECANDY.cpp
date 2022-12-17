#include <iostream>
#include <array>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int can,el;
	    cin>>el>>can;
	    int num[el];
	    int sum=0;
	    for(int i=0; i<el; i++){
	        cin>>num[i];
	        sum += num[i];
	    }
	    
	    if(sum<=can){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	    
	    
	    
	    
	}
	return 0;
}
