#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t, a, arr[10];
    cin>>t;
    while(t--){
        cin>>a;
        int i = 0, count = 0, s=0;
        int rem;
        while(a != 0){
            rem = a % 10;
            arr[i] = rem*pow(10, i);
            i++;
            count++;
            s++;
            a /= 10;
        }
        for(int j = 0;j < s;j++){
            if(arr[j] == 0){
                count--;
            }
        }
        cout<<count<<"\n";
        for(int j = 0; j< s; j++){
            if(arr[j] == 0){
                continue;
            }
            else{
                cout<<arr[j]<<" ";
            }
        }
        cout<<"\n";
    }
}
