#include <iostream>
#include <cstdlib>
#include "840_complexcls.h"

void f1(void);
template<typename T>void f2(myArray<T>);
int main(){
  f1();
  return 0;
}
void f1(void){
  double x[]{10, 12, 34, 54};
  myArray<double> d(x, sizeof(x) / sizeof(double));
  cout << d;
  cout << endl;
  myArray<double> b;
  cin >> b ;
  cout << b[1] << endl;
  b[1] = 15;
  f2(b);
  string sx[]{"Kamran", "Reza", "Kmabiz", "Ali"};
  myArray<string> r(sx, 4);
  cout << r;
  cout << endl;
  myArray<string> z;
  cin >> z ;
  cout << z[1] << endl;
  z[1] = 15;
  f2(z);
  complexCls acmp[] = { {3,5}, {2,4}, {5,9} };
  myArray<complexCls> myacmp(acmp, 3);
  cout << myacmp << endl;
}
template<typename T> void f2(myArray<T> k){
  k.print();
}
