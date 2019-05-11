/*
for median, use k = n/2, a = 0 and b = n
select(k,a,b)
pick a pivot p in the sequence between a abd b
partition the subsequence elements into 3 elements: <p, =p , >p
let n1, n2, n3 be the sizes of each subswquence
if k<n1
	return select (k,0,n1)
else if (k> n1+n2)
	return select (k, n1+n2, n)
else return p

implement  and compare time to sorting and taking middle element
*/

#include <iostream>
#include <ctime>

using namespace std;

// prints the array elements out
void print(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
// parameters to compare time for section of code to run
	int timeBefore, timeAfter, elapsedTime;
	timeBefore = time(0);
	timeAfter = time(0);
	elapsedTime = timeAfter - timeBefore;


	srand(time(0));
	const int SIZE = 1000;
//create array and populate wiht a swquence of random numbers
	int values[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		values[i] = rand() % 100;
	}
	timeBefore = time(0);
	print(values, SIZE);
	timeAfter = time(0);
	cout << endl <<  timeAfter - timeBefore << endl;
//	quicksort(values, 0, SIZE - 1);
	print(values, SIZE);




	return 0;
}