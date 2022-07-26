#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll b[99];
    ll i, difference, sum1, sum2=0;
    for(i=0;i<99;i++){
        cin>>b[i];
    }
    for(i=0;i<99;i++){
        sum2 += b[i];
    }
    sum1 = 50*(101);
    difference = sum1 - sum2;
    cout<<difference;
}