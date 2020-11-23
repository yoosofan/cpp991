#include <iostream>
using namespace std;
class myArray{
  static const int MAX = 100;
  double a[MAX];
  int n;
  void copy(const  myArray& b){
    this -> n = b.n;
    for(int i = 0; i < n; i++)
    this -> a[i] = b.a[i];
  }
  public:
  double get(const int index = 0 ){
    if(index < n) return a[index];
    cout << "Error in getting an element of myArray" << endl;
    return 0;
  }
  void set(const int index, const double value){
    if( index < n ) a[index] = value;
    cout << "Error accessing myArray " << endl;
  }
  myArray(const double *a = nullptr, int n = 0){
    if( n > MAX ) 
      n = MAX ;
    for(this -> n = n--; n >= 0; n--)
      this -> a[n] = a[n];
  }
  myArray(const myArray& b){
    cout << "copy construcotr" << endl;
    copy(b);
  }
  ~myArray(){
    cout << "Destructor" << endl;
  }
  void print(void){
    cout << " n = " << n << endl;
    for(int i = 0; i < n; i++)
      cout << "a[" << i << "] = " << a[i] << endl;
  }
  myArray& operator=(const myArray& b){
    cout << "Assignment myArray" << endl;
    copy(b);
    return *this;
  }
  myArray operator+(const myArray& b){
    myArray c;
    c.n = b.n;
    for(int i = 0; i < this -> n; i++ )
      c.a[i] = a[i] + b.a[i];
    cout << "operator + in myArray" << endl;
    return c;
  }
};
void f1(void);
void f2(myArray);
int main(){
  f1();
  return 0;
}
void f1(void){
  double x[]{10, 12, 34, 54};
  myArray d(x, sizeof(x) / sizeof(double));
  myArray p, q;
  q = p = d;
  q = p + d ;
  cout << "q.print();" << endl;
  q.print();
  cout << "before call f2" << endl;
  f2(p);
}
void f2(myArray k){
  k.print();
}
