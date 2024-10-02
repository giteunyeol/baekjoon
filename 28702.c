#include <stdio.h>
#include <stdlib.h> // atoi 함수를 위한 헤더 선언
#include <string.h>

// FizzBuzz question

/*
first가 fizz or fizzbuzz
1) second가 buzz
2) second가 buzz x
second가 fizz or fizzbuzz
1) third가 buzz
2) third가 buzz x
third가 fizz or fizzbuzz
1) first가 buzz
2) first가 buzz x

*/

// 2 Fizz 4  , 7 8 Fizz , Fizz 13 14

int main(void)
{
    char first[9];  // 1번째 줄
    char second[9]; // 2번째 줄
    char third[9];  // 3번째 줄

    // 3번째줄까지 scanf를 받음
    scanf("%s", first);
    scanf("%s", second);
    scanf("%s", third);

    if (strcmp(first, "Fizz") == 0 || strcmp(first, "FizzBuzz") == 0) 
    {
        if (strcmp(second, "Buzz") ==  0) 
        {
            printf("Fizz");
        }
        else
        {
            int secondtrans = atoi(second); // thirdtrans에 third를 int형으로 바꾼 숫자 삽입
            int temp = secondtrans;
            while (1)
            {
                temp = temp % 15;
                if(temp <= 15) // 판별할 타이밍
                {
                    if(temp == 13)
                    {
                        printf("FizzBuzz");
                        break;
                    }
                    else
                    {
                        printf("Fizz");
                        break;
                    }
                }
            }
        }
    }
    else if (strcmp(second, "Fizz") == 0 || strcmp(second, "FizzBuzz") == 0)
    {
        if (strcmp(third, "Buzz") == 0)
        {
            int firsttrans = atoi(first); // firsttemp에 first int형으로 변환
            printf("%d", firsttrans + 3);
        }
        else
        {
            int thirdtrans = atoi(third);
            int temp = thirdtrans;
            while(1)
            {
                temp = temp % 15;
                if(temp <= 15)
                {
                    if(temp == 4)
                    {
                        printf("Buzz");
                        break;
                    }
                    else
                    {
                        printf("%d", thirdtrans + 1);
                        break;
                    }
                }

            }
        }
    }
    else if (strcmp(third, "Fizz") == 0 || strcmp(third, "FizzBuzz") == 0)
    {
        if (strcmp(first, "Buzz") == 0) 
        {
            int transsecond = atoi(second);
            printf("%d", transsecond + 2);
        }
        else
        {
            int firsttrans = atoi(first);
            int temp = firsttrans;
            while(1)
            {
                temp = temp % 15;
                if(temp <= 15)
                {
                    if(temp == 7)
                    {
                        printf("Buzz");
                        break;
                    }
                    else
                    {
                        printf("%d", firsttrans + 3);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}