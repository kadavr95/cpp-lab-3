#include <iostream.h>
#include <iomanip>
#include <conio.h>
#include <math.h>

void main( )
{
  double r, a, b, x, y;
  cout<<"Enter r, a, b, x, y\n";
  cin>>r>>a>>b>>x>>y;
  if (x>=0)
	if(sqrt(x*x+y*y)<=r)
		cout<<"yes";
	else
		cout<<"no";
  else
	if ((x)>=(-b/2) && (y)>=(-a/2) &&(y)<=(a/2))
		cout<<"yes";
	else
		cout<<"no";
  getch();
}
