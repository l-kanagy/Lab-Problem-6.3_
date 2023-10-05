#include<iostream>
using namespace std;
int main()
{
	double n2, tot = 0, tot2 = 0, tot3, tot4;
	int n = 0, n4 = 4, array[8];
	cout << "input num, q to quit: ";

	while (n4 == 4) {
		cin >> n2;
		tot = tot + n2;
		array[n] = n2;
		if (n == 0) {
			if (cin.fail()) {
				cout << "No Data to Process - Exiting . . . Press any key to continue";
				return 1;
			}
		}
		if (cin.fail())
			break;
		n++;
	}
	


	double a = tot / n;
	n4 = 0;

	while (n4 < n) {
		tot3 = (array[n4] - a);
		tot4 = tot3 * tot3;
		tot2 = tot2 + tot4;
		n4++;
	}
	
	double d = tot2/(n-1);
	d = sqrt(d);
		cout << " n = " << n << ", average = " << a << ", st dev = " << d;
	return 0;
}
