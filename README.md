# 정글 8기-53번 사용

The practicing sequence could be `Linked List` -> `Stack n Queue` -> `Binary Tree` -> `Binary Search Tree`.


Approperiate `steps` to do each question: **Read the question's requirement in question sheet -> Find the corresponding main frame and copy it to your C compiler, i.e. Code::Block -> Finish the function part -> Try compiling and input some test cases.**
***

The main frames of each question are provided such that the function part is left empty for you to write and fill in the blank to complete the question. Basic functionalities like `POP/PUSH/DEQUEUE/ENQUEUE/REMOVE_LINKED_NODE/FIND_LINKED_NODE` are already provided in the main frame. You don't need to write these basic functions.

These questions only illustrate some basis of Data Structure. However, they can be your keys of the door to new world of CS. After finishing these questions, you may have a brief view of what the Data Structure is.

* 포인터
	- 메모리 주소를 저장하는 변수.
		- *p : 포인터가 가리키는 주소의 값을 가져온다.(역참조)
		- &ㅁ : 변수 a의 주소

* 가상화(Virtualization)
	- 물리적 컴퓨터 자원을 논리적으로 분리하는 기술. 시스템 프로그래밍에서 중요.
		- 예) 하나의 물리 서버에서 여러 개의 가상 서버를 운영(VM, Docker 등)
		- 프로세스마다 자기만의 가상 메모리 공간을 갖도록 OS가 가상화한다.

* GCC (GNU Compiler Collection)
	- C언어를 컴파일할 때 사용하는 대표적인 컴파일.
		- -Wall: 모든 경고 메시지를 표시
		- -g: 디버깅 정보 포함
		- -O2: 최적화 옵션

* 포인터의 연산
	- 포인터끼리 연산이 가능하다. 배열과도 밀접한 관련이 있다고 한다.
		- p + 1: 다음 정수형 주소로 이동 (4바이트씩 증가)
		- 배열 탐색이나 동적 메모리에서 유용

* 동적 메모리 할당
	- malloc, calloc, realloc, free 등을 사용하여 런타임 중에 메모리르 할당할 수 있다.

* B 트리
	- 균형 잡힌 다진 트리로, 데이터베이스나 파일 시스템에서 자주 사용됨.
		- 노드에 여려 개의 키와 자식 포인터를 가질 수 있음.
		- 이진 탐색 트리보다 높이를 낮춰 탐색을 빠르게 함.
		- B트리는 보통 차수(degree)를 기준으로 설계됨.
		- C로 직접 구현하려면, struct, 포인터 배열 등을 써야한다.

* 위상 정렬
	- 방향 그래프에서 순서를 정하는 알고리즘. (선수 과목 문제 같은..)
	- 사이클이 없는 DAG에서만 가능하다.
	- 대표적인 알고리즘: 진입 차수(indegree) 방식
