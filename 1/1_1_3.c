#include <stdio.h>

//int arr[1000000]; // 만약 N의 최대값이 100만인 경우

int main(void)
{
	int T;
	int N;
	int arr[100];
	freopen("input.txt", "r", stdin);  // 표준입력을 파일로 변경됨
	scanf("%d", &T); // 테스트케이스 개수 T를 먼저 읽고
	for (int tc = 1; tc <= T; tc++)  // T만큼 반복
	{
		scanf("%d", &N);
		for (int i = 0; i < N; i++)
		{
			scanf("%d", &arr[i]);
			// 이 부분에 가장 큰 수를 찾는 코드가 들어간다.
		}
	}
}
