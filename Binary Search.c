#include<stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first = 0; // Ž�� ����� ���� �ε��� ��
	int last = len - 1; // Ž�� ����� ������ �ε��� ��
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2; // Ž���� �߾��� ã�� ��

		if (target == ar[mid]) // Ž���� �߾��� �´ٸ�
		{
			return mid; // Ž�� �Ϸ�
		}
		else // ���� Ÿ���� �ƴ϶�� Ž�� ����� ������ ���δ�
		{
			if (target < ar[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	// ���⼭ ���� last�� -1 first�� +1�� ���� ������ first<=mid<=last�� �׻� �����ϰ� �Ǿ� Ž�� ����� �������� �ʴ� ��� first / last ���� ������ �Ͼ�� �ȴ�
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