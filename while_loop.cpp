#include<iostream>
using namespace std;

//Program for printing -ve number if user inters -ve number

int main(){
    int n;
    cin>>n;
    while(n>0){
       cout<<n<<endl;
       cin>>n;
    } // While loop doesent run when n=0 as 0 represent to false and rest other numbers represent to true as 0 comes we come out of the while loop
    cout<<"The number entered is negetive."<<endl;
}
