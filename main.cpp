#include <iostream>

using namespace std;

int main()
{
	int lim = 100;
	int num;
	bool divisible = false;

	for (int num = 2; num < lim; num++)
	{
		
		divisible = false;

		for (int i = 2; i < num; i++)
		{
			if (num%i == 0 && i!=num)
			{
				divisible = true;
			}
		}

		if (!divisible)
			cout << num <<endl;
		
	}

	cin.get();
	return 0;
}