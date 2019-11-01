#include<stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first = 0; // 탐색 대상의 시작 인덱스 값
	int last = len - 1; // 탐색 대상의 마지막 인덱스 값
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2; // 탐색의 중앙을 찾는 것

		if (target == ar[mid]) // 탐색의 중앙이 맞다면
		{
			return mid; // 탐색 완료
		}
		else // 만약 타겟이 아니라면 탐색 대상을 반으로 줄인다
		{
			if (target < ar[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	// 여기서 각각 last에 -1 first에 +1을 하지 않으면 first<=mid<=last가 항상 성립하게 되어 탐색 대상이 존재하지 않는 경우 first / last 역전 현상이 일어나게 된다
	return -1;
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	
		if (idx == -1)
			printf("Search failed\n");
		else
			printf("Target saved index : %d\n", idx);

		idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
		if (idx == -1)
			printf("Search Failed\n");
		else
			printf("Target saved index: %d\n", idx);
		return 0;
	
}