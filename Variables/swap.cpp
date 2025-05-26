#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter the a: ";
    cin>>a;
    cout<<"enter the b: ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"this is a: "<< a<<endl;
    cout<<"this is b: "<< b<<endl;   
    return 0;
}