#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year : ";
    cin>>year;
    /*year divisble by 4 and not by 100
    or divisble by 400*/
    // (condition)?statemnt 1:statement 2;
    (year%4==0 && year%100 != 0)||(year%400 == 0)?cout<< year<<" is a leap year\n": cout<< year << " is not leap year\n";
    return 0;
}