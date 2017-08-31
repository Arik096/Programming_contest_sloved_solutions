#include <iterator>
#include <map>
#include<bits/stdc++.h>

using namespace std;
#define FOR(i,n) for(long (i)=0;(i)<(n);((i)++))

int main() {
    map<long,long> iMap, iMap2;
    long iNum, index1, index2; cin >> iNum;
    index1=index2=0;
    long iArr[3][iNum];
    FOR(i,iNum){
        cin >> iArr[0][i];
        iMap[iArr[0][i]]=i;
    }
    iMap2=iMap;
    copy_n(iArr[0],iNum,iArr[1]);
    copy_n(iArr[0],iNum,iArr[2]);
    sort(iArr[1],iArr[1]+iNum);
    FOR(i,iNum){
        if(iArr[1][i]!=iArr[0][i]){
            index1++;
            iArr[0][iMap[iArr[1][i]]]=iArr[0][i];
            iMap[iArr[0][i]]=iMap[iArr[1][i]];
        }
        if(iArr[1][iNum-1-i]!=iArr[2][i]){
            index2++;
            iArr[2][iMap2[iArr[1][iNum-1-i]]]=iArr[2][i];
            iMap2[iArr[2][i]]=iMap2[iArr[1][iNum-1-i]];
        }
    }
    cout << min(index1,index2);
    return 0;
}