#include <iostream>
using namespace std;
 
class Parent{
    int x; 
    public:
        Parent(int i){
            x = i;
            cout<<"Inside base class's parameterized constructor"<<endl;
        }
};
 
class Child : public Parent{
    public:
        Child(int x): Parent(x){
            cout<<"Inside sub class's parameterized constructor"<<endl;
        }
};
 
int main(){
    Child obj1(10);
    return 0;
}