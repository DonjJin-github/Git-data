#include <stdio.h>
int main()
{
char charType; //char�� ���� charType ����
int integerType; //int�� ���� integerType����
float floatType; //float�� ���� floatType����
double doubleType; //double�� ���� doubleType����

printf("[----- [Your Name] [Student ID] -----]\n"); //""���� ���� ���
printf("\t�ֵ���\t    2019038016\t\n\n");           //""�� ������ �̸�, �й� ���
//sizeof �� �ڷ����� ũ�⸦ ����Ʈ ������ ���ϴ� �������̴�
//%ld�� long�� �ڷ��� ���
printf("Size of char: %ld byte\n",sizeof(charType)); //char�� ������ charType�� sizeof �����ڸ� ����Ͽ� charType����Ʈ ��� (=1byte)
printf("Size of int: %ld bytes\n",sizeof(integerType)); //int�� ������ integerType�� sizeof �����ڸ� ����Ͽ� integerType����Ʈ ��� (=4byte)
printf("Size of float: %ld bytes\n",sizeof(floatType)); //float�� ������ floatType�� sizeof �����ڸ� ����Ͽ� floatType����Ʈ ��� (=4byte)
printf("Size of double: %ld bytes\n",sizeof(doubleType)); //double�� ������ doubleType�� sizeof �����ڸ� ����Ͽ� doubleType����Ʈ ��� (=4byte)
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); //�ڷ��� char�� sizeof �����ڸ� ����Ͽ� char���� ����Ʈ ���  (=1byte)
printf("Size of int: %ld bytes\n",sizeof(int)); //�ڷ��� int�� sizeof �����ڸ� ����Ͽ� int���� ����Ʈ ��� (=4byte) 
printf("Size of float: %ld bytes\n",sizeof(float)); //�ڷ��� float�� sizeof �����ڸ� ����Ͽ� float���� ����Ʈ ��� (=4byte)
printf("Size of double: %ld bytes\n",sizeof(double)); //�ڷ��� double�� sizeof �����ڸ� ����Ͽ� double���� ����Ʈ ��� (=8byte)
printf("-----------------------------------------\n"); 
printf("Size of char*: %ld byte\n",sizeof(char*)); //char�� �����ͺ����� sizeof �����ڸ� ����Ͽ� char���� ����Ʈ ���  
printf("Size of int*: %ld bytes\n",sizeof(int*)); //int�� �����ͺ����� sizeof �����ڸ� ����Ͽ� int���� ����Ʈ ��� 
printf("Size of float*: %ld bytes\n",sizeof(float*)); //float�� �����ͺ����� sizeof �����ڸ� ����Ͽ� float���� ����Ʈ ��� 
printf("Size of double*: %ld bytes\n",sizeof(double*)); //double�� �����ͺ����� sizeof �����ڸ� ����Ͽ� double���� ����Ʈ ��� 
//�������Ǻ����� ũ��� �ڷ����� ������� 32��Ʈ ���α׷��̶�� 4����Ʈ 64����Ʈ ���α׷��̶�� 8����Ʈ�̴�
return 0;
}