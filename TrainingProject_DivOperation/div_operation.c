#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "russian");

    int a, b;
    float div;

    printf("������� ������ �������� - ");
    scanf_s("%d", &a);
    printf("������� ������ �������� - ");
    scanf_s("%d", &b);

    if (b == 0) {
        printf("�� 0 ������ ������!\n");
    }
    else {
        if (a == 0) {
            printf("�����: 0\n");
        }
        else {
            div = a / b;
            printf("�����: %.2f\n", div);
        }
    }
    system("pause");
    return 0;
}