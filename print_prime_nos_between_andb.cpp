#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cin>>a>>b;

    for(i=a;i<b;i++){
       for(j=2;j<i;j++){
         if(i%j==0){
           cout<<i<<" = non prime"<<endl;
           break;
         }
          
       }
          if(j==i){
           cout<<i<<" = prime"<<endl;
         }
       
    
    }  

}