#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"enter ch: ";
  cin>>ch;
  if (ch>='a' && ch<='z')
  {
    cout<<"lower case\n";
  }else{
    cout<<"upper case\n";
  }
return 0;
}