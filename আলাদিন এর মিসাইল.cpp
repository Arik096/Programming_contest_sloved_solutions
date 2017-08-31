#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int sec,min,hr,sec1;
    int sec2,min1,hr1; 
        cin>>hr1>>min1>>sec2;
       cin>>sec;
       hr=sec/3600;
       sec=sec%3600;
       min=sec/60;
       sec1=sec%60;
        hr1=hr1+hr;
        min1=min1+min;
        sec2=sec2+sec1;
        if(sec2>=60)
        {
                min1+=1;
                sec2=sec2-60;
        }
        if(min1>=60)
        {
                hr1+=1;
                min1=min1-60;
        }
        cout<<"The Missile will launch at "<<hr1<<":"<<min1<<":"<<sec2<<endl;
        //The Missile will launch at 22:35:9 
    return 0;
}