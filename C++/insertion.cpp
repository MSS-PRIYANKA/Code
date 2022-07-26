#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

void insertionsort(vector<ll> &v){
    int i, j, n = v.size(), temp;
    for(i = 0; i<n;i++){
        j = i;
        while(j >0 and v[j-1] > v[j]){
            temp = v[j];
            v[j] = v[j-1];
            v[j-1] = temp;
            j--;
        }
        for(int k = 0; k<n ;k++){
        if(k != v.size()-1){
            cout<<v[k]<<" ";
        }
        else{
            cout<<v[k];
        }
    }
    cout<<"\n";
    }
}
int main(){
    ll n, a;
    cin>>n;
    vector<ll> v;
    for(int i = 0; i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    insertionsort(v);
}