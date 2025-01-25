#include <iostream>
#include <vector>

using namespace std;

//계수정렬 문제. stdio와의 연결을 끊어줘야함.

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;  
    int save[10001] = { 0 };

    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        save[k]++;
    }

    for(int i = 0; i <= 10000; i++)
    {
        for(int j = 0; j < save[i]; j++)
        {
            cout << i << "\n";
        }
    }

    

    return 0;
}