//분할가능한 배낭문제
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef struct item* item_ptr;
typedef struct item {
	int id;
	int weight;
	int profit;
	int profit_per_unit;
} item_t;

int n, W;
vector <item_t> items;
bool compare_item(item_t i, item_t j);
void Knapsack1(int& maxprofit, int& totweight);

int main(void)
{
	int T;
	int max, tot;

	cin >> n;

	//vector <int> items(n + 1);
	items.resize(n + 1);

	for (int i = 1; i <= n; i++)
	{
		cin >> items[i].weight;
	}

	for (int i = 1; i <= n; i++)
	{
		cin >> items[i].profit;
	}

	for (int i = 1; i <= n; i++)
	{
		// 설정
		items[i].id = i;
		//각 가방 무게마다 가치 설정하기
		items[i].profit_per_unit = items[i].profit / items[i].weight;
	}

	// 내림차순 정렬
	sort(items.begin() + 1, items.end(), compare_item);

	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		//if (T == 0) break;

		cin >> W;
		int sum = 0;

		Knapsack1(max, tot);

		//cout << max << endl;

		/*for (item_t i : items)
		{
			if (i.weight == 0 || i.profit == 0) continue;

			cout << i.weight << " " << i.profit << endl;
		}*/
	}
	return 0;
}

bool compare_item(item_t i, item_t j)
{
	if (i.profit_per_unit > j.profit_per_unit)
	{
		return true;
	}

	return false;
}

void Knapsack1(int& maxprofit, int& totweight)
{
	maxprofit = totweight = 0;

	for (int i = 1; i <= n; i++)
	{
		if (totweight + items[i].weight <= W)
		{
			maxprofit += items[i].profit;
			totweight += items[i].weight;
			cout << items[i].weight << " " << items[i].profit << endl;
		}
		else
		{
			maxprofit += (W - totweight) * items[i].profit_per_unit;
			cout << W - totweight;
			totweight += (W - totweight);
			cout << " " << totweight << endl;

			break;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (totweight + items[i].weight <= W)
		{
			cout << items[i].weight << " " << items[i].profit << endl;
		}
	}

	cout << maxprofit << endl;
}

//for (int i = 1; i <= n; i++)
//{
//	if (totweight + items[i].weight < W)
//	{
//		cout << items[i].weight << " " << items[i].profit << endl;
//	}
//	else
//	{
//		cout << W - totweight << " " << totweight << endl;
//	}
//}