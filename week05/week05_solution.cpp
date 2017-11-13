// week05_solution.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// TASK 00
	//int n = 0, sum = 0; // добра практика е да инициализирате променливите с начални стойности. 

	//
	//do
	//{
	//	cout << "Enter n = ";
	//	cin >> n;
	//} while (n < 0);
	//for (int i = n; i > 0; --i) // <=> for (int i = n; i > 0; i--) и двете ще изпълнят еднакво условието
	//{
	//	if (i != 1)
	//	{
	//		cout << i << " + ";
	//	}
	//	else
	//	{
	//		cout << i << " = ";
	//	}

	//	sum += i;
	//}

	//cout << sum << endl;

	// TASK 01
	//int number = 0;

	//do
	//{
	//	cout << "Enter number from [0, 10]: ";
	//	cin >> number;
	//} while (number < 0 || number > 10);

	//for (int current = number; current <= 100; current++)
	//{
	//	if (current % 2 == 0 && current % 3 == 0)
	//	{
	//		cout << current << " ";
	//	}
	//}

	// TASK 02
	//int number = 0;
	//bool flag = true;


	//cout << "Enter number to check: ";
	//cin >> number;

	//for (int i = 2; i <= number / 2 && flag; ++i)
	//{
	//	if (number % i == 0) // <=> (!(number % i))
	//	{
	//		flag = false;
	//	}
	//}

	//cout << ((flag == true) ? "Prime" : "Not prime") << endl; // тернарен оператор (може да го напишете с if-else)

	// TASK 03
	//int start = 0, end = 0;
	//bool flag = true;

	//do
	//{
	//	cout << "Enter start point (start < end): ";
	//	cin >> start;

	//	cout << "Enter end point (end > start): ";
	//	cin >> end;
	//} while (start >= end);

	//for (int current = start; current < end; ++current)
	//{
	//	for (int i = 2; i <= current / 2 && flag; ++i)
	//	{
	//		if (current % i == 0) // <=> (!(current % i))
	//		{
	//			flag = false;
	//		}
	//	}

	//	if (flag)
	//	{
	//		cout << current << ' ';
	//	}
	//	
	//	flag = true; // трябва да "занулим" (да вкараме флага в начално състояние), преди проверката за следващото число
	//}

	// TASK 04
	//int element = 1, numberOfRows = 0;

	//do
	//{
	//	cout << "Enter number or rows (> 0): ";
	//	cin >> numberOfRows;
	//} while (numberOfRows <= 0);

	//for (int row = 1; row <= numberOfRows; ++row)
	//{
	//	for (int col = 1; col <= row; ++col)
	//	{
	//		cout << element << " ";

	//		++element;
	//	}

	//	cout << endl;
	//}

	// TASK 05
	//int number = 0, sum = 0;
	//
	//do
	//{
	//	cout << "Enter number = ";
	//	cin >> number;
	//} while (number <= 0);

	//for (int i = 1; i < number; ++i)
	//{
	//	if (number % i == 0)
	//	{
	//		sum += i;
	//	}
	//}

	//if (number == sum)
	//{
	//	cout << "Number is perfect\n";
	//}
	//else
	//{
	//	cout << "Number is not perfect\n";
	//}

	// TASK 06
	//int number = 0, rem = 0, binary = 0, exp = 1; // number ще пази въведеното число, rem ще пази остатъка при делени на 2, bin ще пази бинарното число, exp - експонента
	//	
	//do
	//{
	//	cout << "Enter number (>= 0): ";
	//	cin >> number;
	//} while (number < 0);
	//	
	//while (number)
	//{
	//	rem = number % 2;
	//	number = number / 2;
	//	binary = binary + rem * exp;
	//	exp = exp * 10;
	//}
	//	
	//cout << binary << endl;
	//	
	//
	// TASK 07
	//int rows, coef = 1;

	//cout << "Enter number of rows: ";
	//cin >> rows;

	//for (int i = 0; i < rows; i++)
	//{
	//	for (int space = 1; space <= rows - i; space++)
	//	{
	//		cout << "  ";
	//	}

	//	for (int j = 0; j <= i; j++)
	//	{
	//		if (j == 0 || i == 0)
	//		{
	//			coef = 1;
	//		}
	//		else
	//		{
	//			coef = coef*(i - j + 1) / j;
	//		}

	//		cout << coef << "   ";
	//	}
	//	cout << endl;
	//}

	// TASK 08
	//int rowsCount = 0, space = 1;

	//do
	//{
	//	cout << "Enter number of rows (>0) : ";
	//	cin >> rowsCount;
	//} while (rowsCount <= 0);

	//space = rowsCount - 1;
	//for (int row = 1; row <= rowsCount; row++)
	//{
	//	for (int c = 1; c <= space; c++)
	//	{
	//		cout << " ";
	//	}
	//	space--;

	//	for (int c = 1; c <= (2 * row - 1); c++)
	//	{
	//		cout << "*";
	//	}
	//	cout << "\n";
	//}

	//space = 1;
	//for (int row = 1; row <= (rowsCount - 1); row++)
	//{
	//	for (int c = 1; c <= space; c++)
	//	{
	//		cout << " ";
	//	}

	//	space++;
	//	for (int c = 1; c <= (2 * (rowsCount - row) - 1); c++)
	//	{
	//		cout << "*";
	//	}
	//	cout << "\n";
	//}

	// EXTRA TASKS:
	
	// a^n
	//int n = 0;
	//double a = 0, result = 1;


	//cout << "Enter n: ";
	//cin >> n;

	//cout << "Enter a: ";
	//cin >> a;

	//if (n > 0)
	//{
	//	while (n--)
	//	{
	//		result *= a;
	//	}
	//}
	//else if (n < 0)
	//{
	//	while (n++)
	//	{
	//		result /= a;
	//	}
	//}
	//else
	//{
	//	result = 1;
	//}

	//cout << "a^n = " << result << endl;

	// трицифрени и число к
	//int k = 0;
	//do
	//{
	//	cout << "Enter k(> 0): ";
	//	cin >> k;
	//} while (k <= 0);

	//for (int start = 100; start <= 999; ++start)
	//{
	//	if ((start % 10) + (start / 10 % 10) + (start / 100) == k)
	//	{
	//		cout << start << " ";
	//	}
	//}
	//cout << endl;

	// малки букви бройка
	//int size = 0, count = 0;
	//char symbol = ' ';

	//do
	//{
	//	cout << "Size(> 0): ";
	//	cin >> size;
	//} while (size <= 0);

	//for (int i = 0; i < size; ++i)
	//{
	//	cout << "Enter symbol: ";
	//	cin >> symbol;

	//	if (symbol >= 'a' && symbol <= 'z')
	//	{
	//		++count;
	//	}
	//}

	//cout << "Count of small characters: " << count << endl;

	// ПАЛИНДРОМ
	//int tmp = 0, number = 0, lastDigit = 0, rev = 0;

	//do
	//{
	//	cout << "Enter a positive number: ";
	//	cin >> number;
	//} while (number <= 0);
	//tmp = number; // за да запазим стойността

	//do
	//{
	//	lastDigit = tmp % 10;
	//	rev = (rev * 10) + lastDigit;
	//	tmp = tmp / 10;
	//} while (tmp != 0);

	//cout << "Original: " << number << endl;
	//cout << "Reverse: " << rev << endl;

	//if (number == rev)
	//{
	//	cout << "The number: " << number << " is a palindrome\n";
	//}
	//else
	//{
	//	cout << "The number is not a palindrome\n";
	//}

	// Sum and count
	//int number = -1, countOfOdd = 0, sumOfEven = 0;

	//do
	//{
	//	cout << "Enter number: ";
	//	cin >> number;

	//	if (number % 2 == 0)
	//	{
	//		sumOfEven += number;
	//	}
	//	else
	//	{
	//		countOfOdd++;
	//	}

	//} while (number != 0);

	//cout << "Sum of evens is: " << sumOfEven << "\nCount of odds are: " << countOfOdd << endl;

	// часовник с "празно" посредата
	//int line = -1, number = -1, position = -1;

	//cout << "Enter odd number: ";
	//cin >> number;

	//while (((number % 2 == 0) || (number < 0)))
	//{
	//	cout << "Enter positive odd number: ";
	//	cin >> number;
	//}


	//for (line = 0; line <= number - 1; line++)
	//{
	//	for (position = 0; position <= number - 1; position++)
	//	{
	//		if (line > 0 && line < number - 1)
	//		{
	//			if ((position - line == 0) ||
	//				(position == ((number - 1) - line)))
	//			{
	//				cout << "*";
	//			}
	//			else cout << " ";
	//		}
	//		else cout << "*";
	//	}
	//	cout << endl;
	//}

	// Пълен часовник
	//int number = 5;

	//do
	//{
	//	cout << "Enter n(>0): ";
	//	cin >> number;
	//} while (number < 0);

	//for (int i = number; i > 0; i--) {
	//	for (int j = number; i < j; j--)
	//	{
	//		cout << " ";
	//	}
	//	for (int j = 0; i > j; j++)
	//	{
	//		cout << "*";
	//	}
	//	for (int j = 0; i > j; j++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}

	//for (int i = 0; i < number; i++)
	//{
	//	for (int j = 0; j < (number - (i + 1)); j++)
	//	{
	//		cout << " ";
	//	}
	//	for (int j = 0; j <= (2 * i) + 1; j++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}

    return 0;
}

