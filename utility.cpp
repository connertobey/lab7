// utility.cpp
#include "utility.h"
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    
bool ApproxEqual(double d1, double d2, double tolerance){
    if(!(tolerance == 0)){
        if( fabs(d1 - d2) < tolerance){;
            return true;
        }
    }
    else if(tolerance == 0){
        if(d1 == d2){
            return true;
        }
    }
    return false;

}

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

