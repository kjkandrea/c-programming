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


