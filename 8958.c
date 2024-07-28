#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) // o/x 줄을 몇번 반복 할것인지
    {
        char ans[100] = {0, }; // o/x를 받을 배열 선언(ans) 
        scanf("%s", ans); //배열에 o/x를 받음
        int len = strlen(ans); // 배열의 길이 선언 (ans)
        int plus = 1; // 더해줄 수: plus
        int score = 0; //그 줄의 점수

        for (int j = 0; j < len; j++)
        {
            if(ans[j] == 'O')
            {
                score += plus;
                plus++;
            }
            else if(ans[j] == 'X')
            {
                plus = 1;
            }
        }
        printf("%d\n", score);

    }
    return 0;
}

