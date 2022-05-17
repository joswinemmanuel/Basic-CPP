#include <bits/stdc++.h>
using namespace std;

class Person{
    private:
        string gender;
    public:
        string name;
        int age;
        Person(string n,int a){
            name=n;
            age=a;
        }
        Person(string n,int a,string g){
            name=n;
            age=a;
            gender=g;
        }
        void vote(){
            if(age>=18){
                printf("You are old enough to vote\n");
            } else {
                printf("You are not old enough ot vote\n");
            }
        }
        void set_gender(string g){
            if(g=="Male"||g=="Female"){
                gender=g;
            } else {
                gender="Not defined";
            }            
        }
        void get_gender(){
            cout<<gender<<"\n";
        }
};

int main(){
    Person p1("Joswin",19);
    cout<<p1.name<<" is "<<p1.age<<" years old\n";
    p1.vote();
//    cout<<p1.gender; -> will result in an error as gender is private in the class
    p1.set_gender("Male");
    p1.get_gender();
    return 0;
}