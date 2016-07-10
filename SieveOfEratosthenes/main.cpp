//
//  main.cpp
//  SieveOfEratosthenes
//
//  Created by Brent Perry on 7/10/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    vector<int> master_list;
    int user_input;
    int list_max;
    int found_primes = 0;
    
    cout << "Please enter a number; we will then find that many prime numbers: ";
    cin >> user_input;
    list_max = user_input * 6;
    cout << "\n";
    
    master_list.push_back(0);
    master_list.push_back(0);
    
    
    for (int i = 2; i <= list_max; ++i) {
        master_list.push_back(1);
    }
        
    for (int i = 2; i <= sqrt(list_max); ++i) {
        if (master_list[i] == 1) {
            for (int j = i * 2; j <= list_max; j+=i) {
                master_list[j] = 0;
            }
        }
    }
    
    
    
    cout << "The first " << user_input << " prime numbers are: \n";
    int i = 0;
    while (found_primes < user_input) {
        if (master_list[i] == 1) {
            cout << i << " ";
            ++found_primes;
        }
        ++i;
    }
    cout << "\n";
    
}
