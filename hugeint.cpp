#include "hugeint.h"
#include<iostream>
#include<string>
#include<cstdlib>

HugeInt::HungInt()
{
	
}

HugeInt::HugeInt(int x)
{
	int a1[50]={0};
	string  a2;
	a=x;
	i=0;
	while((a/10)!=0)
	{
		intResult[i]=a%10;
		a=a/10;
		i++;
	}
}

HugeInt::HugeInt(string s)
{
	for(i=0;i<50;++i)
	{
		intResult[i]=(s[i]-48)%10;
	}
}

HugeInt HugeInt::operator+(HugeInt y)
{	
	HugeInt plusAns;
	for(i=49;i>=0;--i)
	{
		plusAns.intResult[i]=strResult[i]+y.intResult[i];
	}

	for(i=0;i<50;++i)
	{
		plusAns.intResult[i+1]+=plusAns.intResult[i];
		plusAns.intResult[i]%=10;
	}
	return plusAns;
}

HugeInt	HugeInt::operator-(HugeInt z)
{
	HangInt minusAns;
	for(i=49;i>=0;--i)
	{
		minusAns.intResult[i+1]=intResult[i]+y.intResult[i];
	}

	for(i=0;i<50;i++)
	{
		minusAns.intResult[i+1]+=minusAns.intResult[i];
		minusAns.intResult[i]%=10;
	}	
	return minusAns;
}



ostream &operator<<(ostream& out,const HugeInt &k)
{
	for(i=49;i>=0;--i)
	{
		if(k.intResult[i]!=0)
		{
			for(;i>=0;i--)
			{
				out<<k.intResult[i];
			}
		}
	}

	return out;
}

istream &operator>>(istream& in,HugeInt &k)
{
	int a3[50]={0};
	string s1;
	in>>sl;
	for(i=0;i<sl.size();i++)
	{
		k.intResult[i]=(sl[i]-48)%10;
	}

	return in;
}
