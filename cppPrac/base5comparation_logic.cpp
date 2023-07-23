#include <iostream>
using namespace std;

int main (){
    int a = 9, b = 7;

    bool cek1, cek2;

    cek1 = (a==b);//false 0
    cek2 = (a!=b);//true 1

    cout<<cek1<<cek2;

    //not
    cek1 = !(a==b);
    //"!" not
    cout<<"\nnot :"<<cek1<<endl;

    // and. could be defined using operator "and", n "&&"
    cek2 = (a==3) and (b==1);//both false
    cout<<"ff :"<<cek2<<endl;//0 false
    cek2 = (a==3) && (b==7);//false true
    cout<<"ft :"<<cek2<<endl;//0 false
    cek2 = (a==9) and (b==1);//true false
    cout<<"tf :"<<cek2<<endl;//0 false
    cek2 = (a==9) && (b==7);//both true
    cout<<"tt :"<<cek2<<endl;//1 true
    
    //or work the same way using operator "||"

    return 0;
}
/*
and
tt = t
tf & ft = f
ff = f

or
tt = t
tf & ft =t
ff = f
*/