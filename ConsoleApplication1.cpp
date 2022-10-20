
#include <iostream>

using namespace std;

int main()
{
	int A;
	cin >> A;
    while(A>0) // ^ 10^6 == 1001 | 110 = 1000 = 8
	{
	  cout << A % 10;
	  A /= 10;
	}


}