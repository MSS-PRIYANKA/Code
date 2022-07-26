#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll a, b, c;
    int i, cost=0;
    cin>>a>>b>>c;
    for(i=1;i<=c;i++){
        cost += i*a;
    }
    if(cost> b){
        cout<<cost-b;
    }
    else{
        cout<<"0";
    }
}