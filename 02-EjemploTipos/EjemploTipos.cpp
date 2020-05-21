  
#include <iostream>
#include <cassert>
#include <assert.h>


using namespace std;

int main(){
    

    bool t = true;
    char c = '5';
    
    unsigned int u = 19;
    unsigned int y = 1;
    int a = -10;
    int b = 5;
    double d = 1.0;
    double e = 0.5;
    double f = 1e-5;
    double g = 0.00001;
    string s ="correctamente";
    
 


    
    unsigned int sumau = u + y;
    int sumai = a + b;
    double sumad = d + e;
    
    
    
    assert(t ==1);
    assert(sumau ==20);
    assert(sumai ==-5);
    assert(sumad ==1.5);
    assert(f == g);
    
    
    
    
    

    
    cout << "Se ejecutaron " << c << " pruebas con assert  " << s <<endl;
    }