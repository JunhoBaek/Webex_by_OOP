# Webex_by_OOP
webex UI를 OOP로 구현(c++)
홍익대학교 2학년 '객체지향 프로그래밍' 과제

사용언어 : c++14
OOP(Object Oriented Programming)


## webex_by_c++ 구조도 도식화

## webex_by_c++ 사용 메뉴얼
프로그램을 실행하면 다음과 같은 창이 출력

![시작화면](https://user-images.githubusercontent.com/55343124/82242271-8a155300-9978-11ea-9f6d-a88454960d58.png)

사용자가 professor인 경우 0을 입력 후 엔터, student인 경우 1을 입력 후 엔터를 하면 다음 화면으로 넘어갑니다.

### professor

![professor](https://user-images.githubusercontent.com/55343124/82242445-d06ab200-9978-11ea-9cd9-b14cafd076f2.png)

#### UI구성
* 엔터를 치면 개인정보를 입력하는 화면이 출력됩니다.
* 이름, 개설하고자 하는 미팅룸 번호(정수)
* 마이크, 카메라 on/off
* 위 요소들을 입력하면 미팅룸 화면으로 이동합니다.

* 상단 미팅룸 정보에는 자신의 이름과 미팅룸 번호, 자신의 마이크 및 카메라 on/off상태, 현재 들어온 student 수, 화면공유 상태가 기록되어 있습니다.
* 채팅 공간에는 student와 professor가 친 채팅이 출력됩니다.
* student 공간에는 학생이 접속할 시 학생의 이름 list가 출력됩니다.

#### Commend
* 원하는 명령에 해당하는 숫자를 입력 후 엔터를 치면 명령을 수행합니다.
** 0번 : 채팅 -> 채팅을 입력하면 화면에 자신의 이름과 채팅이 출력됩니다.
** 1번 : 화면공유 -> 자신이 공유하고자 하는 컨텐츠를 string타입의 문자열로 입력할 수 있습니다.
** 2번 : 학생초대 -> 자신이 초대하고자 하는 학생 수를 입력 후 각 각의 학생 이름을 입력하면 해당 학생이 초대됩니다.
** 3,4번 : 마이크, 카메라 on/off -> 자신의 마이크와 카메라 on/off를 변경할 수 있습니다.
** 5번 : 학생모드 (하나의 UI에 professor/student를 모두 구현하기 위한 기능) -> 학생신분으로 접속했을 때의 프로그램을 확인할 수 있습니다.
** 6번 : 미팅종료

### student

![student](https://user-images.githubusercontent.com/55343124/82242497-e7a99f80-9978-11ea-829f-9a3cc3e415d0.png)

#### UI구성
* 자신이 듣고자 하는 수업의 담당 교수님의 이름 입력 외에는 professor 접속 방식과 같습니다.(기본적인 방법은 professor section 참조)

* 기본적인 화면 구성은 같지만 professor 보다 미팅룸에서 수행할 수 있는 명령이 제한됩니다.

** 3번 : 교수모드(하나의 UI에 professor/student를 모두 구현하기 위한 기능) -> 교수신분으로 접속했을 때의 화면을 출력합니다.
** 4번 : 나가기 -> 접속한 미팅룸에서 나가며 프로그램을 종료합니다.
