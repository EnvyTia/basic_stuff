#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a;
    int b, c;
    int d = 5;
    int e = 6, f =7, g;
    int h,
        i = 9,
        j = 8;
    /*valid int declaration, whitespace doesnt matter
    int a=10; and int a = 10; are valid, totally the same thing.
    int a and int A are different.
    int a; != int A;
    */

    /*receivin integer input
    cin>>a anda cin >> a are valid. totally the same thing
    whitespace doesn`t matter*/
    cin >> a; //valid
    cin >> i; //valid, but i's value would be replaced

    cout<<a<<i;//valid

    /*receivin input usin scan (stdio.h library)*/
    /*
    %d for integer (int)
    %c for character (char)
    %f for float (float) decimal
    %s for string (string[lengthOfString][numberOfString])
    */
    scanf ("%d", &h);
    /*
    cin.get();
    // waitin for input
    */
    return 0;
}

/*
numerical datatype (integers)
short 2 byte 32767
int 4 byte, lim 2.147.483.647
long 8 byte, lim 9.223.372.036.854.775.807

numerical datatype (decimal)
float
double

#unsigned


else
character 1 byte
boolean 1 byte (true/false)
*/