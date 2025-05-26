#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"enter ch: ";
  cin>>ch;
//ASCII number (a-z)=(97 to 122)
// ASCII  number (A-Z)=(65 to 90)
  if (ch>='a' && ch<='z')
  {
    cout<<"lower case\n";
  }else{
    cout<<"upper case\n";
  }
return 0;
}