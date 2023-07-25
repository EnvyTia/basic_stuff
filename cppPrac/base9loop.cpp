#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 7;

    /*
    while([boolean condition]){

    }


    #another:
    do{
        [action]
        [exit condition/ inc-dec]
    }while ([condition]);
    */
   cout<<"b base :";
   cout<<b<<endl;
   while (a>2){//as long as the condition is true
        cout<<"while loop :"<<a--<<endl;

        // action
        // exp:
        b++;

        //exit condition (could be inc/ dec)
        // cin.get();//wait
   }
   cout<<"b after loop :";
   cout<<b<<endl;

    // for (int increment = integer ; [condition] ; integer inc/dec){
        // action
    // }
   for(int i = 0 ; i <= b; i++){
    
    if (i == 3){
        continue;//skip condition
    }
    if (i == 7){
        break;//force exit loop
    }

    cout<< "i value : "<<i<<endl;
   }
}