#include <stdio.h>
int main()
{
int i; //int�� ���� i ����
int *ptr; //int�� ������ ���� ptr ���� 
int **dptr; //int�� ���� ������ ���� dptr ����
i = 1234; //i�� ���� 1234 ����
printf("[----- [Your Name] [Student ID] -----]\n"); //""���� ���� ���
printf("\t�ֵ���\t    2019038016\t\n\n");           //""�� ������ �̸�, �й� ���

//ptr = &i���� 
printf("[checking values before ptr = &i] \n"); //""���� ���� ���
printf("value of i == %d\n", i); //i�� �� 10������ ��� 
printf("address of i == %p\n", &i); //i�� �ּҰ� 16������ ���
printf("value of ptr == %p\n", ptr); //prt�� �� 16������ ���
printf("address of ptr == %p\n", &ptr); //ptr�� �ּҰ� ����Ű�� �� 10������ ���(=�����Ⱚ)

ptr = &i; /* ptr is now holding the address of i */
//ptr = &i ����
printf("\n[checking values after ptr = &i] \n"); //""���� ���� ���
printf("value of i == %d\n", i); //i�� �� 10������ ���
printf("address of i == %p\n", &i); //i�� �ּҰ� 16������ ���
printf("value of ptr == %p\n", ptr); //prt�� �� 16������ ��� (=i�� �ּҰ�)
printf("address of ptr == %p\n", &ptr); //ptr�� �ּҰ� 16������ ���
printf("value of *ptr == %d\n", *ptr); //ptr�� �ּҰ� ����Ű�� �� 10������ ���(=i�� ��)

dptr = &ptr; /* dptr is now holding the address of ptr */
//dptr = %ptr ����
printf("\n[checking values after dptr = &ptr] \n"); //""���� ���� ���
printf("value of i == %d\n", i); //i�� �� 10������ ���
printf("address of i == %p\n", &i); //i�� �ּҰ� 16������ ���
printf("value of ptr == %p\n", ptr); //prt�� �� 16������ ��� (=i�� �ּҰ�)
printf("address of ptr == %p\n", &ptr); //ptr�� �ּҰ� 16������ ���
printf("value of *ptr == %d\n", *ptr); //ptr�� �ּҰ� ����Ű�� �� 10������ ��� (=i�� ��)
printf("value of dptr == %p\n", dptr); //dptr�� �� 16������ ��� (=ptr�� �ּҰ�)
printf("address of dptr == %p\n", &dptr); //dptr�� �ּҰ� 16������ ���
printf("value of *dptr == %p\n", *dptr); //dptr�� ����Ű�� �� 16������ ��� (=ptr�� ��)
printf("value of **dptr == %d\n", **dptr); //dptr�� ����Ű�°�(ptr�ǰ�)�� ����Ű�°� ��� (=i�� ��)

*ptr = 7777; /* changing the value of *ptr */
//*ptr = 7777 ����
printf("\n[after *ptr = 7777] \n"); //""���� ���� ���
printf("value of i == %d\n", i); //i�� �� 10������ ���
printf("value of *ptr == %d\n", *ptr); //ptr�� �ּҰ� ����Ű�� �� 10������ ��� (=i�� ��)
printf("value of **dptr == %d\n", **dptr); //dptr�� ����Ű�°�(ptr�ǰ�)�� ����Ű�°� ��� (=i�� ��)

**dptr = 8888; /* changing the value of **dptr */
//*ptr = 8888 ����
printf("\n[after **dptr = 8888] \n"); //""���� ���� ���
printf("value of i == %d\n", i); //i�� �� 10������ ���
printf("value of *ptr == %d\n", *ptr); //ptr�� �ּҰ� ����Ű�� �� 10������ ��� (=i�� ��)
printf("value of **dptr == %d\n", **dptr); //dptr�� ����Ű�°�(ptr�ǰ�)�� ����Ű�°� ��� (=i�� ��)

return 0;
}