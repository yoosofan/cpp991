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
  complexCls operator++(void);
  complexCls operator++(int dummy);
  friend complexCls operator +(const complexCls& a, const complexCls& b);
  friend complexCls operator -(const complexCls& a,const complexCls& b);
  friend complexCls operator *(const complexCls& a, const complexCls& b);
  friend ostream& operator << (ostream& o1, const complexCls& a);
};
