#include "840_complexcls.h"

ostream& operator << (ostream& o1, const complexCls& a){
   o1 << '(' << a.r << ", " << a.i << ')' ;
   return o1;
}
istream& operator >> (istream& inp1, complexCls& a){
  cout << "Enter real part of complex: ";
  inp1 >> a.r;
  cout << "Enter imaginary part of complex: ";
  inp1 >> a.i;
  return inp1;
}
complexCls operator +(const complexCls& a, const complexCls& b){
  complexCls result ;
  result.r = a.r + b.r;
  result.i = a.i + b.i;
  return result;
}
complexCls operator -(const complexCls& a,const complexCls& b){
  complexCls result ;
  result.r = a.r - b.r;
  result.i = a.i - b.i;
  return result;
}
complexCls operator *(const complexCls& a, const complexCls& b){
  complexCls result;
  result.r = a.r * b.r;
  result.i = a.i * b.i;
  return result;
}
complexCls complexCls::operator++(void){   // ++a
  cout << "not int";
  i++; 
  r++;    
  return *this;  
}
complexCls complexCls::operator++(int dummy){ // a++
  cout<<"int";    
  complexCls result = *this;    
  r++;    
  i++;    
  return result;  
}
double complexCls::Magnitude(){
    return sqrt(r * r + i * i );
}
