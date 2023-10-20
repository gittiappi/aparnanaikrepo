#include <iostream>
using namespace std;
class book{
	private:
		int bid;
		string bname;
		double price;
		
	book()
	{
		bid=121;
		bname="science";
		price=100.0;
		
		}	
	void setbname(string bnm)
	{
		bname=bnm
		}	
	string getbname()
	{
		return bname;
		}	
};
