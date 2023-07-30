#include <iostream>
using namespace std;

double bmi(double h, double w){
    h /= 100;
    h *= h;
    /*simple formula just weight in kg / square
    height in m*/
    double bodyMassIdx = w/h;

    return bodyMassIdx;
}

/*when u set a default value, it would be used if
there's no replacement*/
double bmiDefault(double h=1, double w =1){
    h /= 100;
    h *= h;
    /*simple formula just weight in kg / square
    height in m*/
    double bodyMassIdx = w/h;

    return bodyMassIdx;
}
int main(){
    int x = 6;
    // x /= 3;
    // x *= x;
    x *= x/3; // 6 * (6/2) = 12. valid
    cout<<"value of x\t:"<<x<<endl;
    int kh=178, kw=67;
    cout<<"katen kyokotsu's bmi\t:"<< bmi (kh,kw)<<endl;
    /*the anime maiden on my profile pict, from manga: bleach
    she's the shunshui kyoraku's zanpakuto spirit
    is the data valid? idkbro. never heard kubo confirmed abt that*/

    /*the operation is valid, coz the h & w value processed
    in bmi function after passed as double*/

    /* but properly supposed to be like this one
    since ur height n bodyweight normally in decimal form*/
     
    double height=170, weight=75;
    /*i'm short n overweight lmao
    */
    cout<<"envytia's bmi \t\t:"<< bmi (height, weight)<<endl;

    /*example when the function do not filled*/
    cout<<"def example bmi \t:"<< bmiDefault (height)<<endl;

    
return 0;
}