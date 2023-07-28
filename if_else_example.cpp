#include<iostream>
using namespace std;
// going through if elese
int main(){
    int savings;
cin>>savings;

if(savings>5000){
    if(savings>10000){
        cout<<"Roadtrip with neha"<<endl;
    }
    else{
        cout<<"shopping with neha"<<endl;
    }
}    
else if(savings>2000){
    cout<<"shopping with rashmi"<<endl;
}    
else{
    cout<<"party with friends"<<endl;
}
}
