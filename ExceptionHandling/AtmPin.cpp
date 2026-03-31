#include <iostream>
using namespace std;

int main(){

    int pin,attemps=0;
    const int correctPin=9999;

    while(attemps<3){
      try{
          cout<<"Enter your pin:";
          cin>>pin;

          if(pin!=correctPin){
              throw pin;
          }else{
              cout<<"Atm pin is correct. Access granted."<<endl;
              break;
          }
      }catch(int e){
          attemps++;
          cout<<"Invalid pin! Attemps left: "<<3-attemps<<endl;
          if(attemps==3){
              cout<<"Too many attemps! Your account is locked."<<endl;
          }
      }
    }
    return 0;
}