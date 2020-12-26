#include<iostream>
using namespace std;
void swap(double&, double&);
void swap(string&, string&);
int main(){
  double a = 2, b = 4 ;
  cout << "a: " << a << "\tb: " << b << endl;
  swap(a, b);
  cout << "a: " << a << "\tb: " << b << endl;
  string sta = "Ali" , stb = "Ahmad";
  cout << "sta: " << sta << "\tstb: " << stb << endl;
  swap(sta, stb);
  cout << "sta: " << sta << "\tstb: " << stb << endl;
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
