// 벌집 : +3 , +9 , +15 , +21 ... 6만큼 더하는 숫자가 커짐
// 1, 7, 19, 37, 61 >>>> +6 , + 12, +18, +24
//  6 * i 
// 1 : 1,    2 ~ 7 : 2 ,   8 ~ 19 : 3 , 20 ~ 37 : 4
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int sum = 1;
    
    // sum 에다가 이전항들을 더하면서 판별
    for(int i = 0; i < 10000000; i++)
    {
        sum += 6 * i;
        if (sum >= n)
        {
            printf("%d", i + 1);
            break;
        } 
        
    }



    return 0;
}

