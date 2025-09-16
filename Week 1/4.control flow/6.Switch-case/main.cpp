#include<iostream>
using namespace std;
int main (){
 int grade;
 cout<<"Enter the grade"<<endl;
 cin>> grade;

 switch (grade)
 {
 case 'A':
    cout<<"marks 90 t0 100";
    break;
    case 'B':
    cout<<"marks 80 t0 90";
    break;
    case 'C':
    cout<<"marks 70 t0 80";
    break;
    case 'D':
    cout<<"marks 60 t0 70";
    break;
default:
cout<<"marks 0 t0 60";
    break;
 }
 
return 0;
}