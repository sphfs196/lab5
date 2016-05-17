#include"hugeint.h"
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int	main()
{
	HugeInt	x;
	HugeInt	y(28825252);//int
	HugeInt	z("314159265358979323846");//string
	HugeInt	result;
	cin	>>	x;
	result	=	x+y;
	cout << x	 <<	 "+" << y	 << "	=	"	<<	result	<<	endl;
	result	=	z - x;
	cout	<<	result	<<	endl;
	return	0;
}
