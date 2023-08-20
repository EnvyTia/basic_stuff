#include <iostream>
using namespace std;

/*FINALLY WE'RE HERE!!!!*/

/*
memory:
|adress1|ad2|ad3|ad...|adn|

int a = 5; a have value n adress 
while declaring, would take memory adress
5 is the value

in process 
cout<< a << endl; calling the adress of the memory

then there's a power function (u can use math library actually)
int power (int x){
    return x*x;
}

then
cout<<power(a)<<endl;

in this case, int x on power function would take another
memory adress after taking a's value

so the intention of pointer here is to make the memory ussage
more efficient, that x & a using the same memoery adress
*/

int main(){
    int x = 7;
    int *px= &x;

    int *pnul = nullptr;

    cout<<"value of x\t\t:"<<x<<endl;
    cout<<"adress of x\t\t:"<<&x<<endl;
    cout<<"adress of x via ptr\t:"<<px<<endl;
    cout<<"adress of null via ptr\t:"<<pnul<<endl;

    //dereferencing
    //takin data from a pointer
    cout<<"value of x via ptr\t:"<<*px<<endl;


    /*
    pointerx for adress, *pointerx for value of adress on ptr
    */

return 0;
}