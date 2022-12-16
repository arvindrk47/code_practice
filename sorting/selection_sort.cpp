#include<iostream>
#include<array>
using namespace std;


void SelectionSort(int myarr[]){
    for(int i=0; i<4; i++)
    {
        int minimum =i;
        for(int j=i+1; j<5; j++){
            if(myarr[j]<myarr[minimum]){
                minimum =j;
            }
        }
        if(!minimum =i){
            int temp = myarr[minimum];
            myarr[minimum] = myarr[i];
            myarr[i]= temp;
        }
    }
    
}


int main(){

    array<int,5>myarr;
    for(int i=0; i<5; i++){
        cin>>myarr[i];
    }


    SelectionSort(myarr);

    for(int i=0; i<5; i++){
        cout<<myarr[i]<<" ";
    }
    cout<<endl;
    return 0;
}