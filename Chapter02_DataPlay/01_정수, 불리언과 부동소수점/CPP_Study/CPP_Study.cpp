﻿#include <iostream>
using namespace std;

// 프로그래밍을 단순하게 생각하면
// 적절한 데이터를 저장하고 가공하는 것
// 데이터 + 로직

// 변수 선언 방법

// 0이 아닌 초기화 값이 있으면 .data 영역
int hp = 100;

//초기값이 0이거나, 초기값이 없는 변수라면 .bss 영역
char a;         // 1byte, 최상위 비트는 부호, (-128~127)
__int64 d;     // 8바이트 (long long), (-21.4억~21.4억)

unsigned char ua;    // 최상위 비트까지 사용(0~255)

// 귀찮은데 그냥 대충 4바이트로 가면 안될까?
// -> 콘솔/모바일 게임 -> 메모리가 늘 부족함
// -> 온라인 게임 -> 4바이트 * 1만명

// bool [Note]
// bool은 그냥 1byte 정수에 불과
// 왜 정수 시간에 안 다뤘을까?
// -> 일리 있음. 하지만 어셈블리에서 bool이라는 것은 없음
// bool만 봐도 참/거짓 둘 중 하나라는 힌트를 줍니다. (가독성)
// bool --> 1바이트 정수, 어셈블리에서도 바이트 단위로 하기 때문에 어쩔 수 없다, 최하위 1bit만 유효하게 사용
// al ->레지스터 최소 단위조차도 1byte

// 실수 (부동소수점)
// float double
// 부동(뜰 부, 움직일 동)
// . 을 유동적으로 움직여서 표현하는 방법
// 3.1415926535
// 3.1415926535 = 0.31415926535 * 10 = 314.15926535 * 10^-2
// 1) 정규화 = 0.31415926535 * 10
// 2) 31415926535(유효숫자) 1(지수, 10의 몇승)

// float 부호(1) 지수(8) 유효숫자(23) = 32비트 = 4바이트
// double 부호(1) 지수(11) 유효숫자(52) = 64비트 = 8바이트
float attackSpeed = -3.375f;  // 4바이트
double attackSpeed2 = 123.123; // 8바이트

// ex) -3.375라는 값을 저장
// 1) 2진수 변환 = (3) + (0.375) = 0b11 + 0b0.011 = 0b11.011
// 0.375 = 0.5 * 0 + 0.25 * 1 + 0.125 * 1 = 0b0.011
// 2) 정규화 0b1.1011 * 2^1
// 1(부호) 1(지수) 1011(유효숫자)
// 단 지수는 unsigend byte라고 가정하고 숫자+127 만들어줌
// 예상 결과 : 0b 1 10000000 1011'0000'0000...

// 기억해야될 것: 프로그래밍할 때 부동소수점은 항상 '근사값'이라는 것을 기억
// 1/3=0.333333333333333333333333333333333333333
// 특히 수가 커질수록 오차 범위도 매우 커짐
// 실수 2개를 == 으로 비교하는 것은 지양

int main()
{
    cout << "Hello World!\n";
}

