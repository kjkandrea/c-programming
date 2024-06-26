# 포인터

포인터는 변수의 일종이나 실제적인 데이터 값이 아니라 특정 데이터가 저장된 기억 장소의 주소 이다.

기억공간을 변수명으로 접근하지 않고 주소로 접근하기 위한 방법이다. 

## 연산자

* `*` (간접 참조 연산자) : 포인터가 가리키는 주소에 저장된 **값**을 가져오는 데 사용
* `&` (주소 연산자) : 변수의 **주소**를 구하는 데 사용

## 포인터 변수 선언

`[자료형] *[변수명]`

* `&` **주소**연산자 : 모든 변수에 대한 주소값을 구하는 연산자
* `*` **내용**연산자 : 포인터 변수의 자료(내용)를 구하는 연산자

## void 형 포인터

프로그램 실행시에 자료형이 결정되는 경우에 사용

**저장하기전에 명시적인 형 변환이 필요**

## 포인터 연산

포인터 변수에 1을 증감하는 것은 현재포인터가 가리키고 있는 번지를 중심으로 이전, 이후 자료가 있는 곳을 가리키라는 의미이다.

```c
int array[] = {10, 20, 30, 40, 50};
int *p;

p = &array[0]; // 첫번째 요소 주소값 할당
printf("*(p + 1) = %d\n", *(p + 1)); // (p번지 + 1) 번지의 내용. 20 출력
```

* 동일 배열을 가르키는 경우 두 포인터간의 뺄셈이 가능 : `p - q`, `q - p`
* 두 포인터간의 덧셈은 아예 불가능 : `p + q 이런건 없음`

## 포인터와 배열

포인터와 배열은 서로 호환됨

```c
int A[] = {10, 20, 30, 40, 50}
```

A 는 배열의 0번째 주소를 가르키는 포인터이다.
따라서 다음과 같은 관계가 성립한다.

```c
A == &A[0]
A[0] == *A
```

```c
int A[] = {10, 20, 30, 40, 50}
int *p;
```

`p`가 배열의 두번째 요소를 포인트하게 하려면?

```c
p = A + 1
p = &A[1]
```
