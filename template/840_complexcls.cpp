#include "840_complexcls.h"

ostream& operator << (ostream& o1, const complexCls& a){
   o1 << '(' << a.r << ", " << a.i << ')' ;
   return o1;
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
