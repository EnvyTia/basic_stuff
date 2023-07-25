#include <iostream>
#include <cmath> //math
#include <math.h>
#include <cstdlib> //random
//cppreference.com
/*
exp : sqrt(x) for root
*/
using namespace std;

// DRY (DON'T REPEAT URSELF)

int main (){
    int x =9;
    int a = sqrt(x);

    printf ("akar dari x (%d), adalah %d\n", x, a);
    // cout << sqrt (x);


    // random x sampai y
    /// x + (rand () % y)
    char gacha;
    int beg = 0;
    while (true){
    if (beg ==0){
        cout<<"dadu 1\t\tdadu 2"<<endl;
        cout<< 1 + (rand() % 6)<<"\t\t"<<1 + (rand() % 6)<<endl;
        beg += 1;
    }
    else {
        cout<<"lanjut kh? (y/n)\n";
        cin>>gacha;
        if (gacha == 'y'){
            cout<<"dadu 1\t\tdadu 2"<<endl;
            cout<< 1 + (rand() % 6)<<"\t\t"<<1 + (rand() % 6)<<endl;
        }
        else if (gacha == 'n'){
            cout << "lemah kau bodat";
            break;
        }
        else cout << "nda valid, om"<<endl;
        }
    }
    return 0;
}