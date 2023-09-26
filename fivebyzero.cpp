#include <iostream>
using namespace std;
main()
{ 
double numerator,denominator;

cin>>numerator;
cin>>denominator;
  try{
if(denominator==0)
{ throw("infinite");}

double d=numerator/denominator;
  cout<<numerator<<"/"<<denominator<<"="<<d<<endl;

}

catch (const char *message)
{
	cout<<message;
}
}

