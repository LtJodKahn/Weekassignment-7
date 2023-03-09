#include <iostream>
#include <vector>
#include <algorithm>
#include "LambdaPerfect.h"

using namespace std;

int divides_by_sum(const vector<int> & vect, int & d, int & sum){
    for_each(vect.begin(), vect.end(), 
    [&d, &sum] (int elt) mutable
    { if (elt % d == 0) {sum += d;}; d++; } );
    return sum;
    }
bool perfectdetector(const vector<int> & vect, int & d, int & sum){
    if(divides_by_sum(vect, d, sum) == vect.back()){
        return 1;
    }
    else if(divides_by_sum(vect, d, sum)){
        return 0;
    }
}
