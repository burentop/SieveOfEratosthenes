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
    int user_max;
    
    cout << "Please enter a number to be the upper max: ";
    cin >> user_max;
    cout << "\n";
    
    master_list.push_back(0);
    master_list.push_back(0);
    
    for (int i = 2; i <= user_max; ++i) {
        master_list.push_back(1);
    }
    
    for (int i = 2; i <= sqrt(user_max); ++i) {
        if (master_list[i] == 1) {
            for (int j = i * 2; j <= user_max; j+=i) {
                master_list[j] = 0;
            }
        }
    }
    
    cout << "Prime numbers found up to your max: \n";
    for (int i = 0; i < master_list.size(); ++i) {
        if (master_list[i] == 1) {
            cout << i << " ";
        }
    }
    cout << "\n";
    
}
