# chapter 4-2. 그 외 유용한 연산자
# 4-2-1. 형 변환 연산자가 필요한 경우
#include <stdio.h>

int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);      // (double)을 사용해 a와 b의 값을 실수로 변환
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res;                         // (int)를 사용해 res의 값에서 정수 부분만 추림
	printf("(int) %.1lf의 결과 : %d\n", res, a);

	return 0;
} 
===========================================================================================================
# 4-2-2. sizeof 연산자의 사용 예 
#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("int형 변수의 크기 : %d\n", sizeof(a));
	printf("double형 변수의 크기 : %d\n", sizeof(b));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식의 결괏값의 크기 : %d\n", sizeof(1.5 + 3.4));
	printf("char 자료형의 크기 : %d\n", sizeof(char));

	return 0;
} 
=========================================================================================================== 
# 4-2-3. 복합대입 연산자 
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int res = 2;

	a += 20;               // a와 20을 더한 결과를 다시 a에 저장(+=)
	res *= b + 10;         // b에 10을 더한 결괏값에 res를 곱하고 다시 res에 저장(*=)

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);

	return 0;
}
=========================================================================================================== 
# 4-2-4. 콤마 연산자 
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);        // 차례로 연산이 수행되며 결과적으로
	                         // res에 저장되는 값은 증가된 b의 값이다.
	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res);

	return 0;
} 
===========================================================================================================
# 4-2-5. 조건 연산자
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;         // a와 b 중에 큰 값이 res에 저장
	printf("큰 값 : %d\n", res);

	return 0;
}
===========================================================================================================
# 4-2-6. 비트 연산식의 결과
#include <stdio.h>

int main(void)
{
	int a = 10;			// 비트열 00000000 00000000 00000000 00001010
	int b = 12;			// 비트열 00000000 00000000 00000000 00001100

	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << 1 : %d\n", a << 1);
	printf("a >> 2 : %d\n", a >> 2);

	return 0;
}
===========================================================================================================
# 4-2-7. 연산자 우선 순위와 연산 방향
#include <stdio.h>

int main(void)
{
	int a = 10, b = 5;
	int res;

	res = a / b * 2;                 // 우선순위가 같으므로 왼쪽부터 차례로 연산
	printf("res = %d\n", res);
	res = ++a * 3;                   // a의 값을 1증가시키고 3을 곱한다.
	printf("res = %d\n", res);
	res = a > b && a != 5;           // a > b의 결과와 a != 5의 결과를 && 연산
	printf("res = %d\n", res);
	res = a % 3 == 0;                // a % 3의 값이 0과 같은지 확인
	printf("res = %d\n", res);

	return 0;
}
