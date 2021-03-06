#include <stdio.h>
int main(void)
{
	double num1 = 245; // int형 정수 245를 double형으로 자동 형 변환
	int num2 = 3.1415; // double형 실수 3.1415를 int형으로 자동 형 변환
	int num3 = 129; 
	char ch = num3; // int형 변수 num3에 저장된 값이 char형으로 자동 형 변환 

	// 129가 저장된 변수 num3의 비트 열 : 00000000 00000000 00000000 10000001
	// 그런데 이것을 ch에 저장하기 위해서는 1바이트로 줄여야함으로 상위바이트의 손실로 인해서 10000001만 남음.
	// 10000001 = 이는 정수로 -127 (맨앞에 1이 붙으면 음수 , -128 + 1 = -127)

	printf("정수 245를 실수로 : %f \n", num1);
	printf("실수 3.1415를 정수로 : %d \n", num2);
	printf("큰 정수 129를 작은 정수로 : %d \n", ch);

	return 0;
}