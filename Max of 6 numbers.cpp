#include <iostream>
#include<cmath>
using namespace std;

int max3(int a, int b, int c)
{

if(a>=b)
{
    if(a>=c)
      return a;
    return c;
}
else
{
    if(b>c)
      return b;
    return c;
}

}

int max4(int a, int b, int c, int d)
{
  return max(d, max3(a, b, c));
}

int max5(int a, int b, int c, int d, int e)
{
   return max(e, max4(a,b,c,d));
}

int max6(int a, int b, int c, int d, int e, int f)
{
   return max(f, max5(a,b,c,d,e));
}
//_________________________________

int main() {

    int a, b, c, d, e, f;
    cin >>a>>b>>c>>d>>e>>f;


   cout <<"Max = "<< max6(a,b,c,d,e,f);


	return 0;
}
