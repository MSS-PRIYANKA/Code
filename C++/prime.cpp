#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main(){
    ll n, i, count=0;
    cin>>n;
    if(n == 1){
        cout<<"No";
        return 0;
    }
    if(n == 2){
        cout<<"Yes";
        return 0;
    }
    for(i=2;i<sqrt(n);i++){
        if(n % i == 0){
            count = 1;
        }
    }
    if(count == 0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}