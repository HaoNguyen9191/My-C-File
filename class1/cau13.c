#include <stdio.h>



int main()
{
    float a,b,c,d,e,s;
    printf("Nhap diem 5 mon hoc duoi day:");
    printf("\nVat li (Physic) :");
    scanf("%f",&a);
    while (a<0 || a>10)
    {
        printf("So khong hop le, vui long nhap lai: ");
	scanf("%f",&a);
    }
    printf("\nHoa hoc (Chemistry) :");
    scanf("%f",&b);
     while (b<0 || b>10)
    {
        printf("So khong hop le, vui long nhap lai: ");
	scanf("%f",&b);
    }
    printf("\nSinh hoc (Biology) :");
    scanf("%f",&c);
     while (c<0 || c>10)
    {
        printf("So khong hop le, vui long nhap lai: ");
	scanf("%f",&c);
    }
    printf("\nToan hoc (Mathematic) :");
    scanf("%f",&d);
     while (d<0 || d>10)
    {
        printf("So khong hop le, vui long nhap lai: ");
	scanf("%f",&d);
    }
    printf("\nTin hoc (Computer) :");
    scanf("%f",&e);
     while (e<0 || e>10)
    {
        printf("So khong hop le, vui long nhap lai: ");
	scanf("%f",&e);
    }

    s=(a+b+c+d+e)/5.0;
    if (s>9)
    {
        printf("Ban duoc diem A");
    }
    else if (s>8)
    {
        printf("Ban duoc diem B");
    }
    else if (s>7)
    {
        printf("Ban duoc diem C");
    }
    else if (s>6)
    {
        printf("Ban duoc diem D");
    }
    else if (s>4)
    {
        printf("Ban duoc diem E");
    }
    else 
    {
        printf("Ban duoc diem F");
    }
      
}