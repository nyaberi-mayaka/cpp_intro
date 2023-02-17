#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int a[10] = {1,23,36,52,20,14,23,6,12,10};

	sort(a, a + 5); // sort(starting address, ending address)

	for (int i = 0; i < 10; i++)
	{
		cout<< a[i];
		if (i < 9)
			cout<< ", ";
	}
	cout<<endl;
	if (binary_search(a, a + 10, 20)) // finds a given value in an array. binary_search(start address, end address, value).
		cout<<20<<" is present in the arrray"<<endl;
	else
		cout<<20<<" is not present in the arrray"<<endl;
	return (0);
}
