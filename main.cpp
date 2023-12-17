#include<iostream>
using namespace std;

double Var(double numArray[], int num)
{
	double total = 0;//get the total sum of the numbers in the array
	double mean;// initialize a mean
	double sum = 0;
	for (int i = 0; i < num; i++)
	{
		total += numArray[i];
	}
	mean = total / num;
	for (int j = 0; j < num; j++)
	{
		sum += (numArray[j] - mean) * (numArray[j] - mean);//get the value, then add them up
	}
	double output = sum / num;// final step
	return output;
}

int main()
{
	int num;
	cin >> num;
	double numArray[20];
	for (int i = 0; i < num; i++)
	{
		cin >> numArray[i];
	}
	double output = Var(numArray, num);//call the function
	cout << "Variance = " << output << endl;

	return 0;
}
