#include <stdio.h>
#include<string.h>
#include <windows.h>
int main()
{
    char news[7];
    start: printf("what's the weather?\n");
    gets(news);
    if (!strcmp(news,"rain"))//比较字符串不能用==啊！！！
    {
        printf("Don't play badmiton!");
    }
    else 
     {   
        printf("Go to play badmiton!");
     }
    printf("\n\n");
    goto start;
    system("pause");
    return 0;
}

