#include<iostream>
using namespace std;
int main()
{
    int a; // declaration of intiger variable
    a = 12; // intialization
    cout<<"size of intiger a = "<<sizeof(a)<<"bytes"<<endl;
    
    float b;// declaration of float variable 
    cout<<"size of float b = "<<sizeof(b)<<"bytes"<<endl;

    bool c;
    cout<<"size of boolean variable c = "<<sizeof(c)<<"bytes"<<endl;

    char d; 
    cout<<"size of charcter variable d = "<<sizeof(d)<<"bytes"<<endl;

    short int e;
    cout<<"size of short intiger varible e = "<<sizeof(e)<<"bytes"<<endl;

    long int f;
    cout<<"size of long intiger variable f = "<<sizeof(f)<<"bytes"<<endl;
}