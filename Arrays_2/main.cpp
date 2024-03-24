# include <iostream>
using namespace std;

#define tab "\t";
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(const int arr[], const int n);
int Sum(const int arr[], const int n);
double Avg(const int arr[], const int n);
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	/* int minRand, maxRand;
	do
	{
		cout << "Введите минимальное возможное случайное число"; cin >> minRand;
		cout << "Введите максимальное возможное случайное число"; cin >> maxRand;
		if (minRand == maxRand)cout << "Пределы диапазона не должны совпадать" << endl;
	} while (minRand == maxRand);*/

	FillRand(arr, n);
	//Вывод массива на экран;
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(arr, n) << endl;

}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
int Sum(const int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}