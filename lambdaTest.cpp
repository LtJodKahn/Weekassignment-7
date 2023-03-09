#include <iostream>
#include <vector>
#include <algorithm>
#include "LambdaPerfect.h"
using namespace std;
int main(){

    vector<int>vect(5, 6);

    sort(vect.begin(), vect.end(),[](const int & left, const int & right){
        return left > right;
    });
    int d = 1;
    int sum = 0;
    if(perfectdetector(vect, d, sum) == 1)
    {
    cout << vect.back() << " is a perfect number" << endl;
    }
    vector<int>vect1(27,28);
    sort(vect1.begin(), vect1.end(),[](const int & left, const int & right){
        return left > right;
    });
    int d2 = 1;
    int sum2 = 0;
    if(perfectdetector(vect1, d2, sum2) == 1){
    cout << vect1.back() << " is a perfect number" << endl;
    }
    vector<int>vect2(495, 496);
     sort(vect2.begin(), vect2.end(),[](const int & left, const int & right){
        return left > right;
    });
    int d3 = 1;
    int sum3 = 0;
    if(perfectdetector(vect2, d3, sum3) == 1){
    cout << vect2.back() << " is a perfect number" << endl;
    }

    vector<int>vect3(12, 13);
    sort(vect3.begin(), vect2.end(),[](const int & left, const int & right){
        return left > right;
    });
    int d4 = 1;
    int sum4 = 0;
    if(perfectdetector(vect3, d3, sum3)){
        cout << vect3.back() << " is a perfect number" << endl;
    }
    else if(perfectdetector(vect3, d3, sum3) == 0){
        cout << vect3.back() << " is not a perfect number" << endl;
    }


    return 0;



}