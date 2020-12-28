#include <iostream>
#include <cstdlib>
#include "840_complexcls.h"
#include "824_myArray.h"
using namespace std;
void f1(void);
template<typename T>void f2(myArray<T>);
int main(){
  f1();
  return 0;
}
void f1(void){
  double x[]{10, 12, 34, 54};
  myArray<double> d(x, sizeof(x) / sizeof(double)), d2;
  d2 = d;
  cout << d;
  cout << endl;
  if(d2 == d) 
    cout << "d2 == d" << endl;
  myArray<double> b;
  cin >> b ;
  cout << b[1] << endl;
  b[1] = 15;
  f2(b);
  string sx[]{"Kamran", "Reza", "Kmabiz", "Ali"};
  myArray<string> r(sx, 4), r2 = r;
  cout << r;
  cout << endl;
  if(r2 == r)
    cout << "r2 == r" << endl;
  myArray<string> z;
  cin >> z ;
  cout << z[1] << endl;
  z[1] = 15;
  f2(z);
  complexCls acmp[] = { {3,5}, {2,4}, {5,9} };
  myArray<complexCls> myacmp(acmp, 3), myacmp2 = myacmp;
  cout << myacmp << endl;
  if( myacmp == myacmp2)
    cout << "myacmp == myacmp2" << endl;
}
template<typename T> void f2(myArray<T> k){
  k.print();
}
