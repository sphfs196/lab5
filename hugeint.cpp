#include "hugeint"
#include<iostream>
#include<string>

HugeInt::HugeInt(int x)
{
	a=x;
	i=0;
	while(a/10!=0)
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
		strResult[i]=(s[i]-48)%10;
	}
}

HugeInt HugeInt::operator+(HugeInt y)
{	HugeInt plusAns;
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
		if(k.ans[i]!=0)
		{
			for(;i>=0;i--)
			{
				out<<k.ans[i];
			}
		}
	}

	return out;
}

istream &operator>>(istream& in,HugeInt &k)
{
	string s1;
	in>>sl;
	for(i=0;i<sl.size();i++)
	{
		k.ans[i]=(sl[i]-48)%10;
	}

	return in;
}
