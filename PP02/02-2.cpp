#include <iostream> // ������ 
#include <string>
//���Ĵٵ� ���ӽ����̽��� ����ؼ� :std �Ⱦ��ž�
using namespace std;

class Car {//�θ� Ŭ����
public:
	Car() {
		cout << "Car�� �����մϴ�.\n";

	}
	~Car() {
		cout << "Car�� �Ҹ��մϴ�\n";
	}

	virtual void OpenWindow() {//�����Լ�? �ڽ� Ŭ������ ����Ŭ������ ü������������
		//�θ�Ŭ������ �ִ°� ������
		cout << "â���� ���ϴ�\n";
	}
	virtual void ChangeGear() {
		cout << "�� �ٲߴϴ�\n";
	}

};
class Spack : public Car {// ��� �޴� ��, c++������ ���������(public)
public:
	Spack() {
		cout << "Spack�� �����մϴ�.\n";
	}
	~Spack() {
		cout << "Spack�� �Ҹ��մϴ�.\n";
	}
	void OpenWindow() {//�������̵� �ϴ°Ŵ� ���߾� �ʿ����
		cout << "�������� â���� ���ϴ�.\n";
	}
	void ChangeGear() {
		cout << "�������� �� �ٲߴϴ�.\n";
	}

};

class Escalade : public Car {// ��� �޴� ��
public:
	Escalade() {
		cout << "Escalade�� �����մϴ�.\n";
	}
	~Escalade() {
		cout << "Escalade�� �Ҹ��մϴ�.\n";
	}

	void OpenWindow() {
		cout << "�ڵ����� â���� ���ϴ�.\n";
	}
	void ChangeGear() {
		cout << "�ڵ����� �� �ٲߴϴ�.\n";
	}
};

//�������Լ�
void main() {
	/*int a = 10;
	for (int i; i < 10; i++) {
		�������� ���� for��
	}*/
	int* a[4];// �迭 ���� ��  �����Լ����� �����Ҵ�
	Car* c[2]; // 20:18 �ּҰ��� ���� ����2���� �����Ѱ��� �������� �������
			// �̸� �ڵ忡�� �̸� ���Ŵ� �Ѱ� 

	//Car** c; //����������.. �ּҰ��� �ּҰ��� ������ �ִ´�
	//*c=new Car[2]; // ù��° �ּҰ��� �ּҰ��� �����Ű�
	c[0] = new Spack(); //��ӹ��� �ڽ� �ҷ����� //�ڵ尡 ����Ǹ鼭 �޸� �Ҵ�
	c[1] = new Escalade();
	for (size_t i = 0; i < 2; i++) {
		c[i]->OpenWindow();//�������� �Ҵ��Ҷ� ȭ��ǥ
		c[i]->ChangeGear();
		delete (c[i]);
	}




}