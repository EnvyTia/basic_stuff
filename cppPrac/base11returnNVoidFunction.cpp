#include<iostream>
using namespace std;

// DRY (DON'T REPEAT URSELF)
/*
int [funcName] ([datatype] [varname]){
    action
    return something;
}
*/

/*
void [funcName] ([datatype] [varname]){
    action
    //without return
}
*/

int pangkat (int x){
    x *= x;
    return x;
}

void setengah (int x){
    x /=2;
    cout<<x;
}

int main()
{
    int a =10;

    cout<<pangkat(a)<<endl;
    setengah(a);
    cout<<"\nsetengah dari fungsi pertama: ";
    setengah(pangkat(a));
    //function with a return inside void function is valid;
return 0;
}