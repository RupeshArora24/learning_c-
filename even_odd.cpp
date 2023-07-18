#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
// even number gives mod 2 as zero
    if(num%2==0){
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
}
