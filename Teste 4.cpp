#include <bits/stdc++.h>
using namespace std;


int main() {
int v,n;
cin >> v >> n;
double pct = 0.0;
int d;
double dd;
double k[9];
int t= v*n;
for(int i=0;i<9;i++){
    pct= pct + 0.1;
    dd=t*pct;
    d= int(dd);
    if(d!=dd){
        d++;
        k[i]=d;
    }
    else{
        k[i]=d;
    }
}
for(int i=0;i<9;i++){
    cout << k[i] << " ";
}
}
