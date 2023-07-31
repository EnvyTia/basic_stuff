#include <iostream>
using namespace std;

/*function that return to itself until met a
specific exit condition*/
//positive only

/*2^5 = 2x2x2x2x2
so 2(2^4)
*/
int pangkat (int x, int t){
    if (t>1){
        return x * pangkat(x,t-1);
    }
    //exit condition, t =0
    else return x;
}

/*6! = 6*5*4*3*2*1
6(5(5-1))*/
int factorial(int a){
    if (a==1){
        return a;
    }
    return a*factorial(a-1);
}

int fibonacci(int n){
    if (n==0||n==1){
    return n;
    }
    else return fibonacci(n-1) + fibonacci (n-2);
}

int main(){
    int x=2, t=5, a=6;
    cout<<pangkat(x,t)<<endl;
    cout<<factorial(a)<<endl;
    cout<<fibonacci(10)<<endl;
return 0;
}
