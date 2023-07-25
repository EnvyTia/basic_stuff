#include <iostream>
using namespace std;

/*define the information of function,
so u're able too write the function after
main func, and it wouldn't invalid*/
int kalitiga(int a, int b);


int main(){
    int a =10, b =2;

    cout<<kalitiga(a,b);
    
return 0;
}

int kalitiga(int a, int b){
    return (a*b)*3;
}