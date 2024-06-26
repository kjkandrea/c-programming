# 메모리 동적할당

* 메모리 정적 할당
  * 기억공간의 데이터 영역과 스택 영역 이용
  * 프로그램을 작성하는 단계서 필요한 기억공간의 크기를 결정
* 메모리 동적 할당
  * 기억공간의 힙 엽역 이용
  * 프로그램 실행 중에 입력되는 자료에 맞게끔 기억공간의 크기를 결정

* 데이터 영역 : 
  * 전역 변수, static 변수 저장
  * 프로구램 시작과 동시에 할당. 종료 되면 소멸
* 힙 영역 : 
  * 프로그래머의 필요에 의해 할당/소멸이 이루어지는 영역
  * 실행 되면서 크기가 늘어나고 줄어듬
  * 자유 기억 공간
* 스택 영역 : 지역변수와 매개변수가 저장되는 영역
  * 함수 호출이 완료되면 사라짐

## 장점

* 많은 자료를 처리하는 배열의 크기를 실행시간에 정의해야 하는 경우에 유용
* 프로그램 실행 시 기억 공간의 크기를 지정할 수 있고, 재조정이 가능

## 단점 

* 시간 소요

## 방법

1. 기억공간을 동적으로 할당 받을 변수를 포인터를 이용하여 선언
2. `malloc()` 등을 이용항 기억공간 동적 할당
3. 사용이 끝나면 `free()` 를 이용하여 기억공간 해제

### `malloc()`

* 인자로 할당 받고자 하는 기억 공간의 크기를 byte 단위로 전달
* 할당된 기억 공간의 첫번째 주소를 반환
* 초기화가 안됨 (`calloc()` 은 0으로 초기화가 됨)

### `free()`

할당된 기억공간을 반납

* 인자로 할당된 기억 공간의 주소를 전달

## 기억공간 관리 함수

* `memcmp()` : 기억 공간에 들어 있는 자료를 주어지는 크기만큼 비교하여, 같은지 여부를 알 수 있게 해줌
* `memcpy()` : 기억 공간의 자료를 다른 기억 공간 영역으로 복사
* `memset()` : 기억 공간의 자료를 지정한 문자료 채움. 할당된 기억 공간의 초기화나 내용 삭제를 위해 주로 사용




