long a(int a1,int b1)
{
  return 1 + a1*b1;
}
int q(){}
int q1(){}
int q2(int b,float c){ return b + c; }
char* q3(){}
int q4(int g, ...){} 
int q5(){}
short int main()
{
  // register *const const *(**abcd)(int *x, const char **, void *(*)(),...);
  // register *const const *(**abcd)(int *x, const char **, void *(*)(),...) = NULL;
  register *const const *(**abcd)(x,c,a) = NULL;

  q2(2,33.5);
  a(4,5);
}
