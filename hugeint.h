#include<iostream>
#include<string>

using namespace std;

class HugeInt
{
	public:
		HugeInt(int x=0);
		HugeInt(string);

		friend ostream &operator << (ostream&, const HugeInt &);
		friend istream &operator >>	(istream &, HugeInt &);

		HugeInt operator+(HugeInt);
		HugeInt operator-(HugeInt);

		int intResult[50];
		int strResult[50];
		int n,i;
}
