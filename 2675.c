#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        char alp[21];
        scanf("%d %s", &n, alp);

        int length = strlen(alp);

        for (int j = 0; j < length; j++)
        {
            for (int k = 0; k < n; k++)
            {
                printf("%c", alp[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
