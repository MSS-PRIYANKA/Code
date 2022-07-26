#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    for(int i = 0; i<s.length();i++){
        if(tolower(s[i]) == ('a')){
            a = 1;
        }
        if(tolower(s[i]) == ('e')){
            e = 1;
        }
        if(tolower(s[i]) == ('i')){
            i = 1;
        }
        if(tolower(s[i]) == ('o')){
            o = 1;
        }
        if(tolower(s[i]) == ('u')){
            u = 1;
        }
    }
    if((a == 1)&&(e == 1)&&(i == 1)&&(o == 1)&&(u == 1)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
