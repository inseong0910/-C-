#3-1. 변수의 선언과 사용
#include <stdio.h>

int main(void)
{
	int a;            // int형 변수 a 선언
	int b, c;         // 2개의 int형 변수 b,c를 동시에 선언
	double da;        // double형 변수 da 선언
	char ch;          // char형 변수 ch 선언

	a = 10;           // int형 변수 a에 정수 10 대입
	b = a;            // int형 변수 b에 변수 a의 값 대입
	c = a + 20;       // int형 변수 c에 변수 a의 값과 정수 20을 더한 값 대입
	da = 3.5;         // double형 변수 da에 실수 3.5 대입
	ch = 'A';         // char형 변수 ch에 문자 'A' 대입

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);

	return 0;
}

=========================================================================================
	
#3-2. char형 변수의 사용
#include <stdio.h>

int main(void)
{
	char ch1 = 'A';     // 문자로 초기화, 저장된 값은 문자의 아스키 코드 값
	char ch2 = 65;      // 문자 'A'의 아스키 코드 값에 해당하는 정수로 초기화

	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
	printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);

	return 0;
}

=========================================================================================

#3-3. 여러 가지 정수형 변수
#include <stdio.h>

int main(void)
{
	short sh = 32767;                     // short형의 최댓값 초기화
	int in = 2147483647;                  // int형의 최댓값 초기화
	long ln = 2147483647;                 // long형의 최댓값 초기화
	long long lln = 123451234512345;      // 아주 큰 값 초기화

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);   // long long형은 lld로 출력

	return 0;
}

=========================================================================================

#3-4. unsigned를 잘못 사용한 경우 
#unsigned : '나이'와 같이 음수가 없는 데이터를 저장할 때 사용

#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295;        // 큰 양수 저장
	printf("%d\n", a);     // %d로 출력
	a = -1;                // 음수 저장
	printf("%u\n", a);     // %u로 출력

	return 0;
} 

========================================================================================= 

#3-5. 유효숫자 확인 
#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789;              // 유효 숫자가 많은 값으로 초기화
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft);    // 소수점 이하 20자리까지 출력
	printf("double형 변수의 값 : %.20lf\n", db);

	return 0;
} 

#이 코드를 실행하면 float형 변수의 값과 double형 변수의 값이 미세하게 다르다.
#float형 변수의 값은 소수점 9번째 자리부터, double형 변수의 값은 소수점 17번째 자리부터 다르다.
#컴퓨터에서 실수를 표현하는 방식에 차이가 있기 때문 

========================================================================================= 

#3-6. char 배열에 문자열 저장 
#include <stdio.h>

int main(void)
{
	char fruit[20] = "strawberry";               // char 배열 선언과 문자열 초기화
	
	printf("딸기 : %s\n", fruit);                // 배열명으로 저장된 문자열 출력
	printf("딸기쨈 : %s %s\n", fruit, "jam");    // 문자열 상수를 직접 %s로 출력

	return 0;
} 

========================================================================================= 

#3-7. char 배열에 문자열 복사 
#include <stdio.h>
#include <string.h>                  // 문자열을 다룰 수 있는 string.h 헤더 파일 포함

int main(void)
{
	char fruit[20] = "strawberry";   // strawberry로 초기화

	printf("%s\n", fruit);           // strawberry 출력
	strcpy(fruit, "banana");         // fruit에 banana 복사
	printf("%s\n", fruit);           // banana 출력

	return 0;
} 

========================================================================================= 

#3-8. const를 사용한 변수 
#include <stdio.h>

int main(void)
{
	int income = 0;                   // 소득액 초기화
	double tax;                       // 세금
	const double tax_rate = 0.12;     // 세율 초기화
	
	income = 456;                     // 소득액 저장
	tax = income * tax_rate;          // 세금 계산
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;
} 

#변수를 선언할 때 앞에 const를 붙이면 초기화된 값을 바꿀 수 없다. 

========================================================================================= 

#3-9. scanf 함수를 사용한 키보드 입력 
#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);       // 여기서 변수 a에 값 입력
	printf("입력된 값 : %d\n", a);  // 입력한 값 출력

	return 0;
} 

#주의 : scanf 함수에서 변수명을 지정할 때는 &를 붙여야 한다.

========================================================================================= 

#3-10. scanf 함수를 사용한 연속 입력 
#include <stdio.h>

int main(void)
{
	int age;                               // 나이는 정수형
	double height;                         // 키는 실수형

	printf("나이와 키를 입력하세요 : ");   // 입력 안내 메시지 출력
	scanf("%d%lf", &age, &height);         // 나이와 키를 함께 입력
	printf("나이는 %d살, 키는 %.1lfcm입니다\n", age, height);   // 입력값 출력

	return 0;
} 

========================================================================================= 

#3-11. 문자와 문자열 입력 
#include <stdio.h>

int main(void)
{
	char grade;               // 학점을 입력할 변수
	char name[20];            // 이름을 입력할 배열

	printf("학점 입력 : ");
	scanf("%c", &grade);      // grade 변수에 학점 문자 입력
	printf("이름 입력 : ");
	scanf("%s", name);        // name 배열에 이름 문자열 입력, &를 사용하지 않는다.
	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;
} 
