#include <stdio.h>
#include <string.h>

int main(void)
{

    while(1)
    {

        char number[100000];
        scanf("%s", number);

        if(number[0] == '0') // 0이 오면 프로그램 종료
        {
            break;
        }

        int count = 1; //count를 빼서 펠린드롬수인지 아닌지 판별
        int length = strlen(number); //length에 number 배열의 길이 할당


        for(int i = 0 ; i < length / 2 ; i++) // 펠린드롬수판별 시행
        {
            if(number[i] != number[length - 1 -i])
            {
                count = 0;
                break;   
            }

        }
        if(count != 1)
        {
            printf("no\n");
        }

        if(count == 1)
        {
            printf("yes\n");
        } 

    }


    return 0;
}