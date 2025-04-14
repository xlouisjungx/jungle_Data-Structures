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
		- 트리의 높이를 줄여서 디스크 I/O 횟수를 줄이 것이 핵심.
		- 모든 리프 노드가 동일한 레벨에 위치.

	- 특징
		- 차수 (Degree, t): 한 노드가 가질 수 있는 최대 자식 수
		- 최소 키 수 : t-1
		- 최대 키 수 : 2t-1
		- 루트는 최소 1개 키를 갖고, 나머지 노드는 최소 t-1개 키를 가짐.

	- 주요 연산
		- 삽입 (Insert)
			- 리프 노드에 삽입
			- 노드가 가득 차면 분할(split) 필요
		- 삭제 (Delete) : 삭제 후 재배치 또는 병합(merge) 발생 가능
		- 탐색 (Search) : 각 노드에서 키들을 선형 검색하면서 탐색 진행

* 위상 정렬
	- 방향 그래프에서 순서를 정하는 알고리즘. (선수 과목 문제 같은..)
	- 사이클이 없는 DAG에서만 가능하다.
	- 대표적인 알고리즘: 진입 차수(indegree) 방식

* Binary Search Tree (BST) - 이진 탐색 트리
	- 각 노드에 최대 두 개의 자식 노드를 가지는 트리 구조로,왼쪽 자식은 부모보다 작고, 오른쪽 자식은 부모보다 크다.
	- 탐색, 삽입, 삭제의 평균 시간 복잡도는 O(log n) (균형이 잡혔을 때의 경울라고 함.)
	- 비균형 트리는 최악의 경우 선형 구조가 되어 시간 복잡도 O(n)

	- 주요 연산
		- 삽입 (Insert) : 루트에서 시작해 삽입할 위치를 찾아가면 비교 후 삽입.
		- 탐색 (Search) : 삽입과 같은 방식으로 원하는 값을 탐색.
		- 삭제 (Delete)
			- 자식이 없는 경우 -> 그냥 삭제
			- 자식이 하나 -> 부모와 자식 연
			- 자식이 둘 -> 오른쪽 서브트리의 최소값 또는 왼쪽 서브트리의 최대값으로 대체 후 삭제

	- 순회 (Traversal)
		- 중위 순회 (In-order) : 왼쪽 -> 현재 -> 오른쪽 (오름차순 출력)
		- 전위 순회 (Pre-order) : 현재 -> 왼쪽 -> 오른쪽
		- 후위 순회 (Post-order) : 왼쪽 -> 오른쪽 -> 현재
