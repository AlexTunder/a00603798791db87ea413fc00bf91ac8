#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    // int16
    // uint 
    // __int128_t happy = 0;
    unsigned long long k;
    long long happy = 0;
    cin >> k;
    k--;
    k = k * 10 + 5;
    happy = k * k;
    std::cout << happy << endl;
}
/*
 5
 15
 25
 35
 45
 55
 65
 75
 85
 95
 105
*/