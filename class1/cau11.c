#include <stdio.h>

int main()
{
    char a; //bien nhap tu ben ngoai
    printf("nhap mot chu de kiem tra no co nam trong bang chu cai va bang chu so hay khong: ");
    scanf("%c",&a);
    if ((a>='a' && a<='z' ) || (a>='A'&& a<='Z'))
    {
        printf("%c thuoc bang chu cai",a);
    }
    else if (a>='0'&& a<='9')
    {
        printf("%c la mot chu so",a);
    }
    else 
    {
        printf("%c khong thuoc ban chu cai hay chu so",a);
    }
    return 0;
}