#include <stdio.h>

void sumofdivide(int N) {

    int i;
    int num = N;
    int sum = 0;
    int flag = 0;

    for (i = N - 54; i < N; i++)
    {
        sum = num = i;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        if (sum == N)
        {
            flag = 1;
            break;
        }
    }

    flag == 1 ? printf("%d", i) : printf("0");
}

int main()
{
    int N;
    scanf_s("%d", &N);
    sumofdivide(N);
}
