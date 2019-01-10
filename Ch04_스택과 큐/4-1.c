//스택: 데이터를 일시적으로 저장하기 위한 자료구조
//가장 나중에 넣은 데이터를 가장 먼저 꺼낸다
//데이터의 입력과 출력순서는 후입선출 (LIFO, LastInFirstOut)
//스택에 데이터를 넣는 작업을 푸쉬(push), 스택에서 데이터를 꺼내는 작업을 팝(pop)
//푸쉬 팝 하는 과정을 꼭대기(top), 스택의 가장 밑바닥부분을 바닥(bottom)

//int형 스택 intStack(헤더)
#ifndef ___IntStack
#define ___IntStack

//스택을 구현하는 구조체
typedef struct{
    int max;    //스택용량
    int ptr;    //스택 포인터
    int *str;   //스택의 첫 요소에 대한 포인터
}IntStack;

//스택초기화
int Initialize(IntStack *s, int max);

//스택에 데이터를 푸시
int Push(IntStack *s, int x);

//스택에서 데이터를 팝
int Pop(IntStack *s, int *x);

//스택에서 데이터를 피크
int Peek(const IntStack *s, int *x);

//스택비우기
void Chear(IntStack *s);

//스택의 최대용량
int Capacity(const IntStack *s);

//스택의 데이터 개수
int Size(const IntStack *s);

//스택이 비어있나요?
int IsEmpty(const IntStack *s);

//스택이 가득찼나요?
int isFull(const IntStack *s);

//스택에서 검색
int Search(const IntStack *s, int x);

//모든 데이터 출력
void Print(const IntStack *s);

//스택 종료
void Terminate(IntStack *s);
#endif
