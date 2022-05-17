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
        void vote(){
            if(age>=18){
                printf("You are old enough to vote");
            } else {
                printf("You are not old enough ot vote");
            }
        }
};

int main(){
    Person p1("Joswin",19);
    cout<<p1.name<<" is "<<p1.age<<" years old\n";
    p1.vote();
    return 0;
}