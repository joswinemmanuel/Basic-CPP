#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;
        Person(string n,int a){
            name=n;
            age=a;
        }
};

int main(){
    Person p1("Joswin",19);
    cout<<p1.name<<" is "<<p1.age<<" years old";
    return 0;
}