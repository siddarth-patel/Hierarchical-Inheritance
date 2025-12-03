#include<iostream>
using namespace std;
class animal{
public:

void eat(){
cout<<"this animal eats food"<<endl;
 }
};
class dog:public animal{
public:
void bark(){
cout<<"the dog barks"<<endl;

}


};


class cat:public animal{
public:
void meow(){
cout<<"the cat meows"<<endl;



}

};


int main(){
 dog mydog;
 cat mycat;
 cout<<"----DOG ACTIONS----"<<endl;
 mydog.eat();
mydog.bark();

cout<<"----CAT ACTIONS---"<<endl;
mycat.eat();
mycat.meow();
return 0;
}

















































































