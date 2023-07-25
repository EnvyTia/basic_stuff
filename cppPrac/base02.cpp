#include <iostream>
using namespace std;
#include "base2kali.cpp"
// copy base2kali.cpp 

/*
// linking non practical
int base2kali (int a, int b);
// compile on terminal using gcc -c base2kali.cpp
// gcc -c base2.cpp
// gcc base2.o base2kali.o -o base2output
*/


int main (){
     int a = 7, b=4;

     cout<<base2kali(a,b)<<endl;
     return 0;
}