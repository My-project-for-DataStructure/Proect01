#include<stdio.h>

int LSearcch(int ar[], int len, int target) // ���� Ž�� �˰��� ���� �� �Լ�
{

	int i;
	for (i = 0; i < len; i++)
	{
		if (ar[i] == target)
			return i; // ã�� ����� �ε��� �� ��ȯ
	}
	return -1; // ã�� �������� �ǹ��ϴ� �� ��ȯ

}

int main()
{
	int arr[] = { 3, 5, 2, 4, 9 };
	int idx;

	idx = LSearcch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("Search failed\n");
	else
		printf("Target saved index : %d\n", idx);
	idx = LSearcch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1)
		printf("Search failed\n");
	else
		printf("Target saved index: %d\n", idx);

	return 0;
}