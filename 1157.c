#include <stdio.h>
#include <string.h>


int main(void)
{
    int alp[26] = {0};
    char word[1000001];
    scanf("%s", word);

    int wordlength = strlen(word);
    for(int i = 0; i < wordlength; i++)
    {
        if(word[i] >= 'a')
        {
            alp[word[i] - 'a']++;
        }
        else if(word[i] < 'a')
        {
            alp[word[i] - 'A']++;
        }
    }
    //-----------------alp에 숫자 할당--------------

    int max = alp[0];
    for(int i = 0; i < wordlength; i++)
    {
        
    }
    int count = 0;
    char result;
    for(int i = 0; i < 26; i++)
    {
        if(count == 1)
        {
            printf("?");
            return 0;
        }
        else if (max == word[i])
        {
            count++;
            result = word[i];
        }
    }
    printf("%c", result);


    return 0;
}