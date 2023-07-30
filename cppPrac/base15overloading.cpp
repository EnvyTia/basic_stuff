#include <iostream>
using namespace std;

/*the function that met the requrement would be used*/

int area(int length, int width){    
    return length*width;
}
double area(double length, double width){    
    return length*width;
}
double area(double length){    
    return length*length;
}

int area(int length){    
    return length*length;
}

int main(){
    cout<<"area of 2*3 rectangle\t\t:"<<area(3,2)<<endl;
    cout<<"area of 2*2 square\t\t:"<<area(2)<<endl;
    cout<<"area of 2.5*3.6 rectangle\t:"<<area(3.6,2.5)<<endl;
    cout<<"area of 3.6 square\t\t:"<<area(3.6)<<endl;
    
return 0;
}