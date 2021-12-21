// k-Combinations_Problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{
	int n, k, i, nFact, kFact, n_kFact, k_comb;
	cout << "Please enter n and k (n>=k) :" << endl;
	cin >> n >> k;

	nFact = 1;
	for (i = 1; i <= n; i++) 
	{
		nFact *= i;
	}
	// Above expression is same with nFact = factorial(n);
	kFact = 1;
	for (i = 1; i <= k; i++)
	{
		kFact *= i;
	}
	// Above expression is same with kFact = factorial(k);
	n_kFact = 1;
	for (i = 1; i <= n - k; i++)
	{
		n_kFact *= i;
	}
	// Above expression is same with n_kFact = factorial(n-k);

	k_comb = nFact / (kFact*n_kFact);
	cout << n << " choose " << k << " is " << k_comb << endl;

	return 0;
}

int factorial(int num)
{
	int factRes, i;

	factRes = 1;
	for (i = 1; i <= num; i++)
	{
		factRes *= i;
	}

	return factRes;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
