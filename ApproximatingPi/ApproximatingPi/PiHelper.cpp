//
//  PiHelper.cpp
//  ApproximatingPi
//
//  Created by Muhammad Hussain on 5/29/19.
//  Copyright © 2019 Muhammad Hussain. All rights reserved.
//

#include "PiHelper.hpp"

int PiHelper::getTermsInSeries1() {
    
    double sum = 0;
    double desiredError = pow(10, -6);
    double err = (M_PI / 4.0) - sum;
    
    int i = 1;
    
    while (err > desiredError) {
        double k = (double)i;
        double num = pow(-1.0, k - 1.0) * pow(1.0, 2.0 * k - 1.0);
        double den = 2.0 * k - 1.0;
        sum += num / den;
        
        i++;
        
        err = (M_PI / 4.0) - sum;
        err = abs(err);
    }
    
    return i - 1;
}

int PiHelper::getTermsInSeries2() {
    
    double sum = 0;
    double sum2 = 0;
    double combinedSum = 0;
    double desiredError = pow(10, -6);
    double err = (M_PI / 4.0) - combinedSum;
    
    int i = 1;
    
    while (err > desiredError) {
        double k = (double)i;
        double num = pow(-1.0, k - 1.0) * pow(1.0/2.0, 2.0 * k - 1.0);
        double den = 2.0 * k - 1.0;
        sum = num / den;

        num = pow(-1.0, k - 1.0) * pow(1.0/3.0, 2.0 * k - 1.0);
        den = 2.0 * k - 1.0;
        sum2 = num / den;

        combinedSum += sum;
        combinedSum += sum2;

        i++;

        err = (M_PI / 4.0) - combinedSum;
        err = abs(err);
    }
    
    return i - 1;
}

int PiHelper::getTermsInSeries3() {
    double sum = 0;
    double sum2 = 0;
    double combinedSum = 0;
    double desiredError = pow(10, -6);
    double err = (M_PI / 4.0) - combinedSum;

    int i = 1;

    while (err > desiredError) {
        double k = (double)i;
        
        double num = pow(-1.0, k - 1.0) * pow(1.0/5.0, 2.0 * k - 1.0);
        double den = 2.0 * k - 1.0;
        sum = 4.0 * (num / den);
        
        num = pow(-1.0, k - 1.0) * pow(1.0/239.0, 2.0 * k - 1.0);
        den = 2.0 * k - 1.0;
        sum2 = -(num / den);
        
        combinedSum += sum;
        combinedSum += sum2;
        
        i++;
        
        err = (M_PI / 4.0) - combinedSum;
        err = abs(err);
    }
    
    return i - 1;
}

int PiHelper::getTermsInSeries4() {
    
    double sum = 0;
    double sum2 = 0;
    double sum3 = 0;
    double combinedSum = 0;
    double desiredError = pow(10, -6);
    double err = (M_PI / 4.0) - combinedSum;
    
    int i = 1;
    
    while (err > desiredError) {
        double k = (double)i;
        double num = pow(-1.0, k - 1.0) * pow(1.0/18.0, 2.0 * k - 1.0);
        double den = 2.0 * k - 1.0;
        sum += (num / den);

        num = pow(-1.0, k - 1.0) * pow(1.0/57.0, 2.0 * k - 1.0);
        den = 2.0 * k - 1.0;
        sum2 += (num / den);

        num = pow(-1.0, k - 1.0) * pow(1.0/239.0, 2.0 * k - 1.0);
        den = 2.0 * k - 1.0;
        sum3 += (num / den);

        i++;

        err = (M_PI) - (48.0*sum + 32.0*sum2 - 20.0*sum3);
        err = abs(err);
    }
    
    return i - 1;
}
