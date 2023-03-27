#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int length, i, count = 0;
    int prev_space = 0; // 判断前一个字符是否为空格
    
    printf("请输入一个字符串：");
    fgets(str, sizeof(str), stdin);
 
    length = strlen(str);
    
    for(i=0; i<length; i++)
    {
        if(str[i] == ' ') // 如果当前字符为空格
        {
            if(!prev_space) // 如果前一个字符不是空格
            {
                prev_space = 1;
            }
        }
        else // 如果当前字符不是空格
        {
            count++;
            prev_space = 0;
        }
    }
    
    printf("去掉空格后的字符个数为：%d", count);
    return 0;
}
