#include<iostream>
using namespace std;
class A{};
class Shape: public A{
protected:
  string name;
  string color;
public:
  int Area(void){return 0;}
};
class Square: public Shape{
  int d;
public:
  int Area(void){return d*d;}
  Square(int d=1){this->d=d;}
};
void f1(Shape a){
  cout << __LINE__ << "\t: " << a.Area() << endl;
}
int main(){
  Shape s;
  f1(s);
  cout <<  __LINE__ << "\t: " << s.Area() << endl;
  Square sq(3);
  cout <<  __LINE__ << "\t: " << sq.Area()<< endl;
  Shape *ps = &s; 
  cout <<  __LINE__ << "\t: " << ps->Area() << endl;
  ps = &sq; 
  cout<<  __LINE__ << "\t: " << ps->Area() << endl;
  A *pa;
  return 0;
}
