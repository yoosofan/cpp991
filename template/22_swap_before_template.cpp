#include<iostream>
#include<cmath>
using namespace std;
void swap(double&, double&);
void swap(string&, string&);
class complexCls{
  double r = 0, i = 0;
  //explicit complexCls(double m=0 , double n=0) {r=m;i=n;}
  public:
  complexCls(double m = 0, double n = 0) {
    r = m; 
    i = n;
  }
  //complexCls(int m=0 , int n=0) {r=m;i=n;}
  void Show(){
    cout << '(' << r << ',' << i << ')' << '\t' << endl;
  }
  double Magnitude(){
    return sqrt(r * r + i * i );
  }
  //operator bool() const {cout<<"aaa:::: "<<endl;return r==0 && i==0 ? false : true;}
  bool operator!() const {
    cout << "aaa:::: " << endl;
    return !(r == 0 && i == 0 ? false : true);
  }
  complexCls operator++(void){   // ++a
    cout << "not int";
    i++; 
    r++;    
    return *this;  
  }
  complexCls operator++(int dummy){ // a++
    cout<<"int";    
    complexCls result = *this;    
    r++;    
    i++;    
    return result;  
  }
  friend complexCls operator +(const complexCls& a, const complexCls& b);
  friend complexCls operator -(const complexCls& a,const complexCls& b);
  friend complexCls operator *(const complexCls& a, const complexCls& b);
  friend ostream& operator << (ostream& o1, const complexCls& a);
};
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
void swap(complexCls& a, complexCls& b);
int main(){
  double a = 2, b = 4 ;
  cout << "a: " << a << "\tb: " << b << endl;
  swap(a, b);
  cout << "a: " << a << "\tb: " << b << endl;
  string sta = "Ali" , stb = "Ahmad";
  cout << "sta: " << sta << "\tstb: " << stb << endl;
  swap(sta, stb);
  cout << "sta: " << sta << "\tstb: " << stb << endl;
  complexCls cma(2, 3), cmb(4, 5);
  cout << "cma: " << cma << "\tcmb: " << cmb << endl;
  swap(cma, cmb);
  cout << "cma: " << cma << "\tcmb: " << cmb << endl;
  return 0;
}
void swap(double& a, double& b){
  double temp = a;
  a = b;
  b = temp;
}
void swap(string& a, string& b){
  string temp = a;
  a = b;
  b = temp;
}
void swap(complexCls& a, complexCls& b){
  complexCls temp = a;
  a = b;
  b = temp;
}
