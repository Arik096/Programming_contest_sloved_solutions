#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //Read input n, k
    int n;
    int k,res=0;
    cin >> n >> k;
    
    /*make a vector which will store all the mod values. Why mod value? Figure out why 1 + 4 + 7 + 10 ... will never be divided by 3. Figure out why 2 + 5 + 8 + 11 ... will never be divided by 3. */ 
    vector<int> m(k);
    for (int i = 0; i < k; i++) {
        m[i] = 0;
    }
    for (int q = 0; q < n; q++) {
        long long int a;
        cin >> a;
        /* get the mod value*/        
        int d = a % k;
        /*we don't need to store the exact numbers, we only need to count number of mod values*/
        m[d]++;
    }
    
    int count = 0;
    for (int i = 1; i < (k+1) / 2; i++) {
        /*Why compare m[i] with m[k-1]? Figure out why 1+2, 4+5, 1+5, 4+2, 1+ 8 are all divided by 3.*/
        if (m[i] > m[k-i]) {
            res += m[i];
        } else {
            res += m[k-i];
        }
    }
    /*if mod value = 0, what will happen? Why ++? */
    if (m[0] >= 1) {
        res++;
    }
    /*Do we miss any value during the last for loop?*/
    if (k%2 == 0 && m[k/2]) {
        res++;
    }
    
    cout << res << endl;
    
    return 0;
}