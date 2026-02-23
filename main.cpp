// COMP 2017 - Practical 1
//
// I declare this submission is my own work and has not been copied from any other source.
// Name: Shashwat Singh
// a#: a1970638
//

#include <iostream>
#include <bits/stdc++.h>
#include <chrono>
using namespace std;


int main() {
    int n;
    cin >> n;      // read an integer from input stream

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        v[i] = i;
    }

    int sum = 0;

    const auto start = chrono::steady_clock::now();
    
    for(int i = 0 ; i < 1000; i++){
        sum += v[rand() % n];
    }
    const auto finish = chrono::steady_clock::now();

    const auto elapsed_us = chrono::duration_cast<chrono::microseconds>(finish - start).count();

    cout << static_cast<double>(elapsed_us) / 1000 << " ms" << endl;

    cout << n;     // print the result to output stream
    return 0;
}

