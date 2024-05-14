# 구조체 (structure)

서로 다른 자료형을 갖는 자료들의 모임을
하나의 자료형으로 정의하여 사용하는 자료형

구조체 => 사용자 정의 자료형

## 구조체 정의

```c
struct vehicle {
    char maker[15];
    long km;
    long cost;
};
```

## 구조체 변수의 선언

```c
struct vihicle car1, car2;
```

## 구조체 변수의 초기화

```c
struct vihicle my_car = { "chevrolet", 50000, 1000 }
```

### 구조체 맴버의 참조

```c
my_car.maker;
my_car.km;
my_car.cost;
```

## 구조체 배열

```c
struct person {
    char name[8];
    int age;
    char sex;
} X[3];
```

or

```c
struct person {
    char name[8];
    int age;
    char sex;
};

struct person X[3];
```

## 구조체 포인터

```c
struct person man;
struct person *pt;

pt = &man;
```

멤버 참조

`(*pt).name` or `pt -> name`

## 함수와 구조체

## 구조체를 함수의 매개변수로 사용

* 구조체 내용 전체가 복사되기 때문에 기억공간 낭비가 심함
* => 구조체 포인터를 매개변수로 사용하여 보완 가능

## 구조체 포인터를 함수의 매개변수로 사용

```c
#include <stdio.h>

struct num
{
    int x;
    int y;
    int sum;
    int mul;
};

int calc(struct num *);

int main()
{
    struct num number1;
    number1.x = 10;
    number1.y = 20;
    calc(&number1);

    printf("x: %d\n", number1.x);
    printf("y: %d\n", number1.y);
    printf("sum: %d\n", number1.sum);
    printf("mul: %d\n", number1.mul);

    return 0;
}

int calc(struct num *number2)
{
    number2->sum = number2->x + number2->y;
    number2->mul = number2->x * number2->y;

    return 0;
}
```

## typedef

이미 존재하는 자료형에 새로운 이름을 붙이는 용도

```c
typedef unsigned int BYTE;
BYTE val;
```

```c
typedef struct {
    char name[15];
    int age;
} Person;

Person student1;
```

## 공용체 (union)

* 동일한 기억장소에 여러 유형의 자료를 저장하기위해서 프로그래머가 선언한 자료형
* 하나의 메모리 공간에 여러 타입의 값들을 할당하고자 존재함
* 하지만 어떤 맴버가 사용중인지를 추적하는 방법을 따로 지원하지않고 직접 관리해야함...

```c
union salary {
    int won;
    long dollar;
}
```
