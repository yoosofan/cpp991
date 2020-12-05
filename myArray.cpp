#include <iostream>
#include <cstdlib>
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
  // myArray() = delete ;
  double get(const int index = 0 ) const{
    if(index < n) return a[index];
    cout << "Error in getting an element of myArray" << endl;
    return 0;
  }
  void set(const int index, const double value){
    if( index < n ) a[index] = value;
    cout << "Error accessing myArray " << endl;
  }
  myArray(const double *a=nullptr, int n=0){
    if( n > MAX ) 
      n = MAX ;
    for(this -> n = n--; n >= 0; n--)
      this -> a[n] = a[n];
  }
  myArray(double x){
    n = 1;
    a[0] = x;
  }
  myArray(const myArray& b){
    cout << "copy construcotr" << endl;
    copy(b);
  }
  ~myArray(){
    cout << "Destructor" << endl;
  }
  void print(void) const{
    cout << " n = " << n << endl;
    for(int i = 0; i < n; i++)
      cout << "a[" << i << "] = " << a[i] << endl;
  }
  myArray& operator=(const myArray& b){
    cout << "Assignment myArray" << endl;
    copy(b);
    return *this;
  }
  myArray operator-(void) const{
    myArray c(*this);
    for(int i=0; i<n; i++)
      c.a[i] = - c.a[i];
    return c;
  }
  myArray operator++(){
    for(int i = 0; i < n; i++)
      a[i]++;
    return *this;
  }
  myArray operator--(int){
    myArray c(*this);
    for(int i = 0; i < n; i++)
      a[i] --;
    return c;
  }
  myArray operator--(){
    for(int i = 0; i < n; i++)
      a[i]--;
    return *this;
  }
  myArray operator++(int){
    myArray c(*this);
    for(int i = 0; i < n; i++)
      a[i] ++;
    return c;
  }
  double& operator[](int index){
    if(index >= n){
      cout << "index out of range: " << index << endl;
      index = 0;
      exit(0);
    }
    return a[index];
  }
  friend myArray operator+(const myArray& a, const myArray& b);
  friend ostream& operator<<(ostream& out1, const myArray& b);
  friend bool operator==(const myArray& a, const myArray& b);
  friend myArray operator-(const myArray& a, const myArray& b);
};
myArray operator-(const myArray& a, const myArray& b){
  myArray c;
  c.n = b.n;
  for(int i = 0; i < a.n; i++ )
    c.a[i] = a.a[i] - b.a[i];
  cout << "operator - in myArray" << endl;
  return c;
}

bool operator==(const myArray& a, const myArray& b){ // < > <= >= != 
  bool retVal = false;
  int i = 0;
  if(a.n == b.n)
    for(i = 0; i < a.n; i++)
      if(a.a[i] != b.a[i])
        break;
  if(i == a.n)
    retVal = true;
  return retVal;
}
ostream& operator<<(ostream& out1, const myArray& b){
  out1 << "n = " << b.n << endl;
  for(int i = 0; i < b.n ; i++)
    out1 << "a[" << i << "]= " << b.a[i] << endl;
  return out1;
}
myArray operator+(const myArray& a, const myArray& b);
void f1(void);
void f2(myArray);
int main(){
  f1();
  return 0;
}
myArray operator+(const myArray& a, const myArray& b){
    myArray c;
    c = a.n > b.n ? a : b;
    int min = a.n < b.n ? a.n : b.n;
    for(int i = 0; i < min; i++ )
      c.a[i] = a.a[i] + b.a[i];
    cout<< "operator + in myArray" << endl;
    return c;
  }

void f1(void){
  double x[]{10, 12, 34, 54};
  myArray d(x, sizeof(x) / sizeof(double));
  cout << d[1] << endl;
  d[1] = 15;
  d = d + 5 ; 
  // d.operator=(d.operator+(5));
  d = 5 + d ;
  d.print();
  cout << "d -- " << endl << d -- << endl;
  cout << "-- d " << endl << -- d << endl;
  // operator<<(operator<<(cout, d), endl);

  //cout << "before call f2" << endl;
  //f2(p);
}
void f2(myArray k){
  k.print();
}
