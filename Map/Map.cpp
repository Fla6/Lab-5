#include "stdafx.h"
#include <iostream>
#include <map>
#include <utility>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	map<int, int> m1;
	map<int, int> m2;
	map<int, int> m3;
	for (int df = 0; df < 6; df++)
	{
		int a = rand() % 10;
		int b = rand() % 10;
		m1.insert(pair<int, int>(a, b));
	}
	for (auto c = m1.begin(); c != m1.end(); c++)
	{
		cout << c->first << " : " << c->second << endl;
	}

	cout << "\n";
	for (auto s = m1.begin(); s != m1.end(); s++)
	{
		if ((s->first < 3) && (s->second > 2))
		{
			m2.insert(pair<int, int>(s->first, s->second));
		}
	}

	cout << "\n";
	for (auto q = m2.begin(); q != m2.end(); q++)
	{
		cout << q->first << " : " << q->second << endl;
	}

	cout << "\n";
	merge(m1.begin(), m1.end(), m2.begin(), m2.end(), inserter(m3, m3.begin()));
	int k = 0;
	for (auto j = m3.begin(); j != m3.end(); j++)
	{
		if ((j->first < 3) && (j->second > 2))
		{
			k++;
		}
		cout << j->first << " : " << j->second << endl;
	}
	cout << "\n" << k << endl;
	if (k != 0)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}


	return 0;
}