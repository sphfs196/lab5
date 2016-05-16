#include<iostream>

using namespace std;

class HugeInt
{
	public:
		HugeInt(int x);
		HugeInt(string);

		friend ostream &operator << (ostream&, const HugeInt &);
		friend istream &operator >>
			(istream &, HugeInt &);

		HugeInt operator+(HugeInt);
		HugeInt operator-(HugeInt);

		int intResult[50]={0};
		int strResult[50]={0};
		int n,i;
}
