#include <stdio.h>
int main()
{
char charType; //char형 변수 charType 선언
int integerType; //int형 변수 integerType선언
float floatType; //float형 변수 floatType선언
double doubleType; //double형 변수 doubleType선언

printf("[----- [Your Name] [Student ID] -----]\n"); //""안의 내용 출력
printf("\t최동진\t    2019038016\t\n\n");           //""의 내용인 이름, 학번 출력
//sizeof 는 자료형의 크기를 바이트 단위로 구하는 연산자이다
//%ld는 long형 자료형 출력
printf("Size of char: %ld byte\n",sizeof(charType)); //char형 변수인 charType을 sizeof 연산자를 사용하여 charType바이트 출력 (=1byte)
printf("Size of int: %ld bytes\n",sizeof(integerType)); //int형 변수인 integerType을 sizeof 연산자를 사용하여 integerType바이트 출력 (=4byte)
printf("Size of float: %ld bytes\n",sizeof(floatType)); //float형 변수인 floatType을 sizeof 연산자를 사용하여 floatType바이트 출력 (=4byte)
printf("Size of double: %ld bytes\n",sizeof(doubleType)); //double형 변수인 doubleType을 sizeof 연산자를 사용하여 doubleType바이트 출력 (=4byte)
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); //자료형 char를 sizeof 연산자를 사용하여 char형의 바이트 출력  (=1byte)
printf("Size of int: %ld bytes\n",sizeof(int)); //자료형 int를 sizeof 연산자를 사용하여 int형의 바이트 출력 (=4byte) 
printf("Size of float: %ld bytes\n",sizeof(float)); //자료형 float를 sizeof 연산자를 사용하여 float형의 바이트 출력 (=4byte)
printf("Size of double: %ld bytes\n",sizeof(double)); //자료형 double를 sizeof 연산자를 사용하여 double형의 바이트 출력 (=8byte)
printf("-----------------------------------------\n"); 
printf("Size of char*: %ld byte\n",sizeof(char*)); //char형 포인터변수를 sizeof 연산자를 사용하여 char형의 바이트 출력  
printf("Size of int*: %ld bytes\n",sizeof(int*)); //int형 포인터변수를 sizeof 연산자를 사용하여 int형의 바이트 출력 
printf("Size of float*: %ld bytes\n",sizeof(float*)); //float형 포인터변수를 sizeof 연산자를 사용하여 float형의 바이트 출력 
printf("Size of double*: %ld bytes\n",sizeof(double*)); //double형 포인터변수를 sizeof 연산자를 사용하여 double형의 바이트 출력 
//포인터의변수의 크기는 자료형에 관계없이 32비트 프로그램이라면 4바이트 64바이트 프로그램이라면 8바이트이다
return 0;
}