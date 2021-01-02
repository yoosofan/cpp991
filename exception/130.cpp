#include <iostream>
#include <cmath>
using namespace std;
void f1(int i);
void f2(int mm);
void f4(int mm);
void f3(void);

int main(){
  f3();
  return 0;
}

void f1(int i){
  if( i <= 0)
    throw 1;
  else
    cout << i << endl;
}

void f2(int mm){
  if (mm > 20)
    throw 2;
  else
    cout << mm << endl;
}

void f4(int mm){
  if(mm < 10)
    throw "Error ";
  cout << "In f4 mm "<< mm << endl;
}

void f3(void){
  try {
    f1(3);
    f4(2);
  }catch(int mm){
    cout << "In f3 " << mm << endl;
  }
}
