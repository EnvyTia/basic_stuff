#include <iostream>
using namespace std;

// global scope
int x = 10;
int globx (){
    return x;
}
int locx(){
    int x = 7;
    return x;
}

int main(){

    cout<<"glob x\t\t\t: "<<x<<endl;//output 10
    int x = 8; //value of x replaced in main
    cout<<"loc x\t\t\t: "<<x<<endl;//output 8
    cout<<"glob x via func\t\t: "<<globx()<<endl;//output 10
    cout<<"another x via func\t: "<<locx()<<endl;//output 7
    cout<<"loc x\t\t\t: "<<x<<endl;//output 8
    {
        // block scope
        int x = 12;//replaced
        cout<<"block scope loc x\t: "<<x<<endl;//output 12
    }
    cout<<"loc x\t\t\t: "<<x<<endl;//output 8
    cout<<"glob x via unary\t: "<<::x<<endl;//output 10

return 0;
}