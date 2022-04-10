#include <iostream> // 인쿠르드 
#include <string>
//스탠다드 네임스페이스를 사용해서 :std 안쓸거야
using namespace std;

class Car {//부모 클래스
public:
	Car() {
		cout << "Car를 생성합니다.\n";

	}
	~Car() {
		cout << "Car를 소멸합니다\n";
	}

	virtual void OpenWindow() {//가상함수? 자식 클래스에 오픈클래스와 체인지기어가없으면
		//부모클래스에 있는거 실행함
		cout << "창문을 엽니다\n";
	}
	virtual void ChangeGear() {
		cout << "기어를 바꿉니다\n";
	}

};
class Spack : public Car {// 상속 받는 법, c++언제나 권한줘야함(public)
public:
	Spack() {
		cout << "Spack를 생성합니다.\n";
	}
	~Spack() {
		cout << "Spack를 소멸합니다.\n";
	}
	void OpenWindow() {//오버라이딩 하는거니 버추얼 필요없어
		cout << "수동으로 창문을 엽니다.\n";
	}
	void ChangeGear() {
		cout << "수동으로 기어를 바꿉니다.\n";
	}

};

class Escalade : public Car {// 상속 받는 법
public:
	Escalade() {
		cout << "Escalade를 생성합니다.\n";
	}
	~Escalade() {
		cout << "Escalade를 소멸합니다.\n";
	}

	void OpenWindow() {
		cout << "자동으로 창문을 엽니다.\n";
	}
	void ChangeGear() {
		cout << "자동으로 기어를 바꿉니다.\n";
	}
};

//운전자함수
void main() {
	/*int a = 10;
	for (int i; i < 10; i++) {
		오랜만에 쓰는 for문
	}*/
	int* a[4];// 배열 쓰는 법  메인함수에선 동적할당
	Car* c[2]; // 20:18 주소값에 대한 변수2개를 생성한거임 정적으로 만든거임
			// 미리 코드에다 미리 쓸거다 한것 

	//Car** c; //이중포인터.. 주소값의 주소값을 가지고 있는다
	//*c=new Car[2]; // 첫번째 주소값엔 주소값을 넣은거고
	c[0] = new Spack(); //상속받은 자식 불러오기 //코드가 실행되면서 메모리 할당
	c[1] = new Escalade();
	for (size_t i = 0; i < 2; i++) {
		c[i]->OpenWindow();//동적으로 할당할땐 화살표
		c[i]->ChangeGear();
		delete (c[i]);
	}




}