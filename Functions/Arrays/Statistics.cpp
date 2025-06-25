
int  Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avarage(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}