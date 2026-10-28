// 3. main.cpp파일에 테스트 코드를 작성합니다. 다음을 확인하여 테스트 코드를 완성해보세요. 
// 3-1. 전처리지시자를 넣으세요. 
// 3-2. main을 작성합니다. 
// 3-2-1. book형 객체3개를 선언하고 원하는 값으로 초기화합니다. 
// 3-2-2. bookGroup형을 가리키는 포인터변수를 선언하고 원하는 값으로 초기화하여 동적으로 할당합니다.  
// 3-2-3. bookGroup형을 가리키는 포인터변수에서 addBook멤버함수를 호출하는데 인자를 3-2-1에서 선언한 객체를 넣습니다. 즉, addBook멤버함수를 3번 호출합니다. 
// 3-2-4. bookGroup형을 가리키는 포인터변수에서 print멤버함수를 호출합니다. 
// 3-2-5. bookGroup형을 가리키는 포인터변수에서 동적으로 할당한 메모리를 해제합니다. 
#include "book.h"
#include "bookGroup.h"

int main()
{
    using namespace jangseoyeon2649035;
    book b1{"title1", 1, 10000},b2{"title2", 2, 20000},b3{"title3", 3, 30000};
    bookGroup* bgPtr{new bookGroup{"book group name"}};

    bgPtr->addBook(b1);
    bgPtr->addBook(b2);
    bgPtr->addBook(b3);
    bgPtr->print();
    
    delete bgPtr;
    return 0;
    
}
