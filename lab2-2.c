#include <stdio.h>
int main()
{
int i; //int형 변수 i 선언
int *ptr; //int형 포인터 변수 ptr 선언 
int **dptr; //int형 이중 포인터 변수 dptr 선언
i = 1234; //i에 정수 1234 저장
printf("[----- [Your Name] [Student ID] -----]\n"); //""안의 내용 출력
printf("\t최동진\t    2019038016\t\n\n");           //""의 내용인 이름, 학번 출력

//ptr = &i이전 
printf("[checking values before ptr = &i] \n"); //""안의 내용 출력
printf("value of i == %d\n", i); //i의 값 10진수로 출력 
printf("address of i == %p\n", &i); //i의 주소값 16진수로 출력
printf("value of ptr == %p\n", ptr); //prt의 값 16진수로 출력
printf("address of ptr == %p\n", &ptr); //ptr의 주소를 16진수로 출력

ptr = &i; /* ptr is now holding the address of i */
//ptr = &i 이후
printf("\n[checking values after ptr = &i] \n"); //""안의 내용 출력
printf("value of i == %d\n", i); //i의 값 10진수로 출력
printf("address of i == %p\n", &i); //i의 주소값 16진수로 출력
printf("value of ptr == %p\n", ptr); //prt의 값 16진수로 출력 (=i의 주소값)
printf("address of ptr == %p\n", &ptr); //ptr의 주소값 16진수로 출력
printf("value of *ptr == %d\n", *ptr); //ptr의 주소가 가리키는 값 10진수로 출력(=i의 값)

dptr = &ptr; /* dptr is now holding the address of ptr */
//dptr = %ptr 이후
printf("\n[checking values after dptr = &ptr] \n"); //""안의 내용 출력
printf("value of i == %d\n", i); //i의 값 10진수로 출력
printf("address of i == %p\n", &i); //i의 주소값 16진수로 출력
printf("value of ptr == %p\n", ptr); //prt의 값 16진수로 출력 (=i의 주소값)
printf("address of ptr == %p\n", &ptr); //ptr의 주소값 16진수로 출력
printf("value of *ptr == %d\n", *ptr); //ptr의 주소가 가리키는 값 10진수로 출력 (=i의 값)
printf("value of dptr == %p\n", dptr); //dptr의 값 16진수로 출력 (=ptr의 주소값)
printf("address of dptr == %p\n", &dptr); //dptr의 주소값 16진수로 출력
printf("value of *dptr == %p\n", *dptr); //dptr이 가리키는 값 16진수로 출력 (=ptr의 값)
printf("value of **dptr == %d\n", **dptr); //dptr이 가리키는값(ptr의값)의 가리키는값 출력 (=i의 값)

*ptr = 7777; /* changing the value of *ptr */
//*ptr = 7777 이후
printf("\n[after *ptr = 7777] \n"); //""안의 내용 출력
printf("value of i == %d\n", i); //i의 값 10진수로 출력
printf("value of *ptr == %d\n", *ptr); //ptr의 주소가 가리키는 값 10진수로 출력 (=i의 값)
printf("value of **dptr == %d\n", **dptr); //dptr이 가리키는값(ptr의값)의 가리키는값 출력 (=i의 값)

**dptr = 8888; /* changing the value of **dptr */
//*ptr = 8888 이후
printf("\n[after **dptr = 8888] \n"); //""안의 내용 출력
printf("value of i == %d\n", i); //i의 값 10진수로 출력
printf("value of *ptr == %d\n", *ptr); //ptr의 주소가 가리키는 값 10진수로 출력 (=i의 값)
printf("value of **dptr == %d\n", **dptr); //dptr이 가리키는값(ptr의값)의 가리키는값 출력 (=i의 값)

return 0;
}
