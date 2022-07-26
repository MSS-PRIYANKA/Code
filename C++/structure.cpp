#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Student{
    string name;
    float cgpa;
    int cash;
};
bool cmp(Student s1, Student s2){
    if(s1.cgpa == s2.cgpa)
        return (s1.cash < s2.cash);
    return (s1.cgpa > s2.cgpa);
}

int main(){
    vector<Student> students;
    string n; float c; int m;
    while(cin>>n>>c>>m){
        students.push_back({n, c, m});
    }
    sort(students.begin(), students.end(), cmp);
    for(auto x: students){
        cout<<x.name<<" "<<x.cgpa<<" "<<x.cash<<"\n";
    }
    return 0;
}