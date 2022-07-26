#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll sum=0, n, rem, num1;
    cin>>n;
    num1 = n;
    while(num1 != 0){
        rem = num1%10;
        sum = sum + (rem*rem*rem);
        num1 /= 10;
    }
    if(sum == n){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }  
}