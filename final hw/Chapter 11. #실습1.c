#include <stdio.h>

int main()
{
    char buf[256] = "";
    int i = 0;
    int i2 = 0;
    printf("문자열 입력:");
    scanf("%[^\n]", buf);//개행 문자 입력까지 문자열을 입력받습니다.(공백 포함)

    while (buf[i] == ' ')//공백 문자이면
    {
        i++;
    }
    while (buf[i])//buf[i]에 문자가 참(널문자가 아님)이면 반복
    {
        buf[i2] = buf[i];
        i2++, i++;
    }
    buf[i2] = '\0';
    printf("앞에 공백 문자 제거:[%s]\n", buf);
    return 0;
}