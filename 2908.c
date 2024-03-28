// 세자리 수를 두개 입력받아서 일의자리 수와 백의자리 수를 스왑한 후, 무슨 수가 더 큰지 비교해서 큰 수를 출력하는 프로그램

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int tempa, tempb;

    //백의자리 > 1의자리, 1의자리 > 100의자리 // 1의자리,
    tempa = (a / 100) + (a % 10 * 100) + (a % 100 - a % 10);
    tempb = (b / 100) + (b % 10 * 100) + (b % 100 - b % 10);
    
    if (tempb > tempa)
    {
        swap(&tempa, &tempb);
    }

    printf("%d", tempa);

    return 0;
}

//135 
// /에 관한 것 135/100 = 1 ,,, 135 / 10 = 13   
// %에 관한 것 135 % 100 = 35 ,,, 135 % 10 = 5 
