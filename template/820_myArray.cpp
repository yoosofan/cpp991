#include <iostream>
#include <cstdlib>
using namespace std;
template<typename T>class myArray{
  static const int MAX = 100;
  T a[MAX];
  int n;
  void copy(const  myArray& b){
    this -> n = b.n;
    for(int i = 0; i < n; i++)
    this -> a[i] = b.a[i];
  }
  public:
  // myArray() = delete ;
  T get(const int index = 0 ) const{
    if(index >= n) {
      cout << "Error in getting an element of myArray" << endl;
      exit(0);
    }
    return a[index];
  }
  void set(const int index, const T value){
    if( index < n ) a[index] = value;
    cout << "Error accessing myArray " << endl;
  }
  myArray(const T *a = nullptr, int n = 0){
    if( n > MAX )
      n = MAX ;
    for(this -> n = n--; n >= 0; n--)
      this -> a[n] = a[n];
  }
  explicit myArray(T x){
    n = 1;
    a[0] = x;
    cout << "construcotr myArray: " << a[0] << endl;
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
  T& operator[](int index){
    if(index >= n){
      cout << "index out of range: " << index << endl;
      index = 0;
      exit(0);
    }
    return a[index];
  }
  template<typename K> friend ostream& operator<<(ostream& out1, const myArray<K>& b);
  template<typename K> friend bool operator==(const myArray<K>& a, const myArray<K>& b);
  template<typename K> friend istream& operator>>(istream& in1, myArray<K>& b);
};
template<typename K> bool operator==(const myArray<K>& a, const myArray<K>& b){ // < > <= >= !=
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
template<typename Y> istream& operator>>(istream& in1, myArray<Y>& b){
  // delete[] b.a;  b.a = nullptr;
  b.n = 0;
  cout << "Enter n ";
  in1 >> b.n;
  while( b.n < 0 || b.n > myArray<Y>::MAX ){
    cout << "number of element must be greater than 0 and less than  " 
      << myArray<Y>::MAX << endl;
    in1 >> b.n;
  }
  // b.a = new double[b.n];
  if( b.n )
    for(int i = 0; i < b.n; i++){
      cout << "Enter a["<< i << "]: ";
      in1 >> b.a[i];
    }
  // else b.a = nullptr;
  return in1;
}
template<typename T> ostream& operator<<(ostream& out1, const myArray<T>& b){
  out1 << "n = " << b.n << endl;
  for(int i = 0; i < b.n ; i++)
    out1 << "a[" << i << "]= " << b.a[i] << endl;
  return out1;
}
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
  
}
template<typename T>void f2(myArray<T> k){
  k.print();
}
