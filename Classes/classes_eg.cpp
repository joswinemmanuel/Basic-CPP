#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;
};

int main(){
    Person p1;
    p1.name="Joswin";
    p1.age=19;
    cout<<p1.name<<" is "<<p1.age<<" years old";
    return 0;
}