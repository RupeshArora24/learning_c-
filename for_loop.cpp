#include <iostream>
using namespace std;

//Program for sum of numbers till n
//for loop revision one 
 int main(){

    int n,sum,i;
    cin>>n;
    sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"The sum is = "<<sum<<endl;
    return 0;
 }
