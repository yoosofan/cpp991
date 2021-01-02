#include <iostream>
#include <cmath>
using namespace std;
void f2(int i);
int f2_2(int i);
void f3(int mm);
void f1(void);

int main(){
  f1();
  return 0;
}

void f1(void){
  try {
    f2(3);
    f3(2);
  }catch(int mm){
    cout << "In f3 " << mm << endl;
  }
}

void f2(int i){
  if( i <= 0)
    throw 1;
  else
    cout << f2_2(9) << endl;
}

int f2_2(int m){
  throw m;
  return m;
}

void f3(int mm){
  if(mm < 10)
    throw 5;
  cout << "In f4 mm "<< mm << endl;
}

