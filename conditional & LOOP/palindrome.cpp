#include<iostream>
using namespace std;
int main(){
int n,rev=0;
cout<<"enter the number : ";
cin>>n;
int org=n;
while(n>0){
/// n=123. modulo of any number give you last digit of No.
rev=(rev*10)+n%10;
// first - rev=(0*10)+3=3.n=123/10=12.3 due to int after point No remove = 12
// second - rev=(3*10)+2=32.n=12/10=1.2 due to int after point No remove = 1
// third- rev=(32*10)+1=321.n=1/10=0.1 due to int after point No remove =  than exit of loop
n=n/10;
}
// palindrome mean number is  equal to her reverse number.ex-n=121 and rev=121 same this palindrome.
if(org==rev){
    cout<<"this is palidrome number";
}else{
    cout<<"this is not palindrome number";
}
    return 0;
}