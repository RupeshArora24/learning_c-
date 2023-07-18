#include<iostream>
using namespace std;

//Program for printing -ve number if user inters -ve number

int main(){
    int n;
    cin>>n;
    do{                       // In this loop the body of loop will run firt time without checking the condition 
                              // only the loop will run one time without the condition and then it will run when condition is satisfied
       cout<<n<<endl;
       cin>>n;
    }while(n>0);
    cout<<"The number entered is negetive."<<endl;
}
