#include <stdio.h>

int main()
{
    char buf[256] = "";
    int i = 0;
    int i2 = 0;
    printf("���ڿ� �Է�:");
    scanf("%[^\n]", buf);//���� ���� �Է±��� ���ڿ��� �Է¹޽��ϴ�.(���� ����)

    while (buf[i] == ' ')//���� �����̸�
    {
        i++;
    }
    while (buf[i])//buf[i]�� ���ڰ� ��(�ι��ڰ� �ƴ�)�̸� �ݺ�
    {
        buf[i2] = buf[i];
        i2++, i++;
    }
    buf[i2] = '\0';
    printf("�տ� ���� ���� ����:[%s]\n", buf);
    return 0;
}