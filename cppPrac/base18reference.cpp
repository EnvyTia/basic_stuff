#include <iostream>
using namespace std;

/*
memory
|ad1|ad2|ad...|adn|
int x =5; address x is ad1, with value =5

make int y with the same adress as a
*/

int main(){
    int x = 8;
    cout<<"value of x\t:"<<x<<endl;
    cout<<"adress x\t:"<<&x<<endl;
    
    int &y =x;
    //y & x sharing  the same adress
    cout<<"value of y\t:"<<y<<endl;
    cout<<"adress y\t:"<<&y<<endl;

    y+=3;
    cout<<"value of y\t:"<<y<<endl;
    cout<<"value of x\t:"<<x<<endl;


return 0;
}