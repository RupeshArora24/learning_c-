#include<iostream>
using namespace std;
int main(){

    int n,i;
    cin>>n;
    for(i=2;i<n;i++){
         if(n%i==0){
            cout<<"number is not prime"<<endl;
            break;
         }
        
    }
    if(n==i){
        cout<<"number is prime"<<endl;
    }

}