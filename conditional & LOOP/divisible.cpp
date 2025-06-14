#include<iostream>
#include<cstring>
using namespace std;
int main(){
int num;
cout << "enter the number : ";
cin >> num;
string result;
if(num%2==0 && num%7==0){
    cout << "this number is divisible by both 2 and 7" << endl;
    }else{
        cout << "this number is not divisible by both 2 and 7" << endl;
        }
         result=(num%2==0 && num%7==0)?"divisible":"not divisible";
         cout << result<< endl;
         return 0;
         }