#include<iostream>
using namespace std;

void functSearch(int*arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = size-1; j > i; j--)
		{
			if (arr[j]<arr[j-1])
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}
}

int main()
{

}