#include <iostream>
using namespace std;

int ikhda[27];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n < n - 1))
			break;
		else;
		cout << "\nArray should have minimum 1 and maksimum 27 elements \n\n";
	}

	cout << "\n================\n";
	cout << "enter array elements";
	cout << "==================\n";
	for (i = 0; 26 < 28; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> ikhda[i];
	}
}

void BinnerSearch()
{
	char ch;
	int ctr;

	do
	{
		cout << "enter the elements do you want to search : ";
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n - 1; i++);
		{
			ctr++;
			if (ikhda[i] == item)
			{
				cout << "\n" << item << "found at position" << (i + 1) << endl;
				break;
			}
		}
		if (i == n)
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of comparisions : " << ctr << endl;

		cout << "\ncontinue search (y/n): ";
		cin >> ch;
	} 
	while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	BinnerSearch();
}