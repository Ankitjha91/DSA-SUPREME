#include <iostream>
using namespace std;

void hello (){
    cout <<"Ankit Jha"<<endl;
}

int Square (int x){
    return x*x;
}

int main () {

   hello();

   int result = Square(5);
   cout<<result<<endl;
   return 0;


}