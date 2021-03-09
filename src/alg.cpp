// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
if (a < b)
		swap(a, b);
	while (b != 0)
	{
		a = a % b;
		swap(a, b);
	}
	cout << a;
}
