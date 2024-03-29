#include "stdafx.h"
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{

	queue<int> q1;
	queue<int> q2;

	q1.push(1);
	q1.push(2);
	q1.push(3);

	
	while (!q1.empty())
	{
		cout << q1.front() << " ";
		q1.pop();
	}

	cout << "\n\n";
	q1.push(5);
	q1.push(6);
	q1.push(7);
	q1.pop();
	q1.emplace(8);
	
	while (!q1.empty())
	{
		cout << q1.front() << " ";
		q1.pop();
	}

	cout << "\n\n";
	q1.push(32);
	q1.push(33);
	q1.push(34);
	vector<int> v1(3);
	for (int a = 0; a < v1.size(); a++)
	{
		v1[a] = q1.front();
		q1.pop();
	}

	vector<int>::iterator sd;
	for (sd = v1.begin(); sd != v1.end(); sd++)
	{
		cout << *sd << " ";
	}

	cout << "\n\n";
	q1.push(42);
	q1.push(43);
	q1.push(44);
	
	for (int i=0; i < 3; i++)
	{
		q2.push(q1.front());
		cout << q2.front() << " ";
		q1.pop();
		q2.pop();
	}

	q1.push(8);
	q1.push(9);
	q1.push(10);
	q1.push(11);
	q2.push(21);
	q2.push(22);
	q2.push(23);
	q2.push(24);

	for (int i = 0; i < 4; i++)
	{
		q1.pop();
		q1.push(q2.front());
		q2.pop();
	}

	cout << "\n\n";
	while (!q1.empty())
	{
		cout << q1.front() << " ";
		q1.pop();
	}

	
	return 0;
}
