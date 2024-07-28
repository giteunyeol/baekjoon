#include <stdio.h>

int main(void)
{
    int n; //과목 갯수
    scanf("%d", &n);
    float firstscore[n];
    int max;

    for (int i = 0; i < n; i++)
    {

        scanf("%f", &firstscore[i]); //처음 점수 입력
        
    }

    //first score의 배열에서 최댓값 뽑기
    max = firstscore[0];
    for(int i = 0; i < n; i++)
    {
        if(max < firstscore[i])
        {
             max = firstscore[i];
        }
    }
    // --------max를 뽑아내고 firstscore들 모두 입력받음------------
    
    float lastscore[n];
    float sum = 0;
    float average; // 평균을 도출하기 전 임시 값

    for (int i = 0; i < n; i++)
    {
        lastscore[i] = (firstscore[i] / max) * 100;
        sum += lastscore[i];
        
    }
    average = sum / n;
    printf("%f", average);

    

    //lastscore뽑기

    return 0;
}

//점수가 a, b, c가 있을때 ,c가 최대 >> c = m; , a의 최종 점수 : a / m * 100 , b의 최종점수 : b / m * 100, c의 최종 점수 : c / m(c) * 100)