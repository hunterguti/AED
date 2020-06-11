
#include <iostream>
#include <assert.h>

using namespace std;



//prototipo
bool IsBisiesto(int y); 



int main(){

assert(not IsBisiesto(-2000));
assert(not IsBisiesto(1500));
assert(not IsBisiesto(1700));
assert(not IsBisiesto(1800));
assert(not IsBisiesto(1900));
assert(not IsBisiesto(2200));
assert(IsBisiesto(2020));
assert(IsBisiesto(1600));
assert(IsBisiesto(2000));
assert(IsBisiesto(2016));




}

bool IsBisiesto(int y){

    return y>1582 && y%4==0  && (y%100 != 0 || y%400==0); 

}
