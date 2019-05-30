//
//  main.cpp
//  ApproximatingPi
//
//  Created by Muhammad Hussain on 5/29/19.
//  Copyright © 2019 Muhammad Hussain. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <math.h>

#include "PiHelper.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    /*
     Using Taylor series and some other methods, we can find a few
     interesting ways to approximate pi.
     
     To see more details, open PiHelper.cpp
     */
    
    PiHelper piHelper;
    
    cout << "Using the Taylor series for arctan(1)." << endl;
    cout << piHelper.getTermsInSeries1();
    cout << " terms of this Taylor series are required to have an error ";
    cout << "no greater than 10^(-6)." << endl;
    
    cout << endl;
    
    cout << "Using the Taylor series for arctan(1/2) + arctan(1/3)." << endl;
    cout << piHelper.getTermsInSeries2();
    cout << " terms of this Taylor series are required to have an error ";
    cout << "no greater than 10^(-6)" << endl;
    
    cout << endl;
    
    cout << "Using the Taylor series for (pi/4) = 4*arctan(1/5) - arctan(1/239)." << endl;
    cout << piHelper.getTermsInSeries3();
    cout << " terms of this Taylor series are required to have an error ";
    cout << "no greater than 10^(-6)" << endl;
    
    cout << endl;
    
    cout << "Using the Taylor series for pi = 48*arctan(1/18) + ";
    cout << "32*arctan(1/57) - 20*arctan(1/239)." << endl;
    cout << piHelper.getTermsInSeries4();
    cout << " terms of this Taylor series are required to have an error ";
    cout << "no greater than 10^(-6)" << endl;
    
    cout << endl;
    
    
    cout << "We can also use a few simple approximations of pi and calculate the error";
    cout << " in each approximation." << endl;
    
    cout << endl;
    
    cout << "Error in 355/113:" << endl;
    cout << abs( M_PI - (355.0/113.0) ) << endl;
    
    cout << "Error in (sqrt(14.0) - (3.0/5.0):" << endl;
    cout << abs( M_PI - (sqrt(14.0) - (3.0/5.0)) ) << endl;
    
    cout << "Error in log(10691.0/462.0):" << endl;
    cout << abs( M_PI - log(10691.0/462.0) ) << endl;
    
    
    
    return 0;
}
