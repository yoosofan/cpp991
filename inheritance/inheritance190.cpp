// Error
#include<iostream>
using namespace std;

class A{};

class Shape: public A{
protected:
  string name;
  string color;
public:
  int Area(void){
    cout<< __LINE__ << "\t: " << "in Shape"<<endl;
    return 0;
  }
  void show(void){
    cout << __LINE__ << "\t: " << "show in shape" << endl;
  }
};

class Square: protected Shape{
  int d;
public:
  int Area(void){
    cout << __LINE__ << "\t: " << "in Square" << endl;
    return d*d;
  }
  Square(int d=1){this->d=d;}
};

void f1(Shape a){
  cout << __LINE__ << "\t: " << a.Area() << endl;
  a.show();
}
int main(){
  Shape s;  
  f1(s);
  Square sq(3);  
  f1(sq);
  //cout<<sq.Area()<<endl;
  Shape *ps = &s; 
  cout << __LINE__ << "\t: " << ps->Area() << endl;
  //ps=&sq; cout<<ps->Area()<<endl;
  A *pa;
  return 0;
}
