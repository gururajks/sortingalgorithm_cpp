#include<vector>
using namespace std;

void qSort(vector<int>& arrayList, int k, int start, int end)
{
	int pivot = arrayList[end];
	int i = start;
	int j = start;
	while (j < end)
	{
		if (arrayList[j] < pivot)
		{
			swap(arrayList[i], arrayList[j]);
			i++;
		}
		j++;
	}
	swap(arrayList[end], arrayList[i]);
	if (i == k)
	{
		return;
	}
	else if (i < k)
	{
		qSort(arrayList, k, ++i, end);
	}
	else if (i > k)
	{
		qSort(arrayList, k, start, --i);
	}

}

vector<int> smallestKNumbers(vector<int> arrayList, const int& k)
{
	vector<int> smallestK;
	qSort(arrayList, k, 0, arrayList.size() - 1);
	for (int i = 0; i < k; i++)
	{
		smallestK.push_back(arrayList[i]);
	}
	return smallestK;
}