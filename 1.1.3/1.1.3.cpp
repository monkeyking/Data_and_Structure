// 1.1.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"
#include <iostream>

using namespace std;

int main()
{
	void bubblesort1A(int A[], int n);
	int A[] = {5,2,7,4,6,3,1};
	void print(int A[]);
	print(A);
	bubblesort1A(A, 7);
	print(A);
	system("pause");
    return 0;
}

void print(int A[]) {
	for (int i = 0; i < 7; i++)
	{
		cout << A[i];
		cout << "  ";
		if (i == 6)
		{
			cout << endl;
		}
	}
}

void bubblesort1A(int A[], int n) {
	bool sorted = false;
	void swap(int*a,int*b);
	void print(int A[]);
	while (!sorted)
	{
		sorted = true;
		for (int i = 1; i < n; i++)
		{
			if (A[i - 1] > A[i]) {
				swap(&A[i-1],&A[i]);
				sorted = false;
			}
		}
		n--;
	}
}


void swap(int *a, int *b) {
	*a = *b + *a;
	*b = *a - *b;
	*a = *a - *b;
}