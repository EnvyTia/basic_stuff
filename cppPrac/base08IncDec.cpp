#include <iostream>
using namespace std;

int main(){
    int a = 9, b =9;

    // increment n decrement

    //post
    cout<<"base a :"<<a<<endl;
    a++;
    cout<<"after a++ :"<<a<<endl;
    a--;
    cout<<"after a-- :"<<a<<endl;
    cout<<"print a++ "<<a++<<endl;//print, then increase
    cout<<"print a "<<a<<endl<<endl;


    //pre
    cout<<"base b :"<<b<<endl;
    ++b;
    cout<<"after ++b :"<<b<<endl;
    --b;
    cout<<"after --b :"<<b<<endl;
    cout<<"print ++b "<<++b<<endl;//increase, then print
    cout<<"print b "<<b<<endl<<endl;

 
    return 0;
}