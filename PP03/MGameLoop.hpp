#pragma once
#pragma once



namespace Musoeun {

	MCommand* key[5];//����Ʈ ������� ������ �پ��ϰ� ���� �ִ�

	void Initialize() {
		key[0] = new LeftCommand();
		key[1] = new RightCommand();
		key[2] = new JumpCommand();
		key[3] = new DownCommand();
		key[4] = new RunCommand();
		//std::cout << "�ʱ�ȭ��\n";
	}

	void Input() {

		int input;
		std::cin >> input;;
		key[input]->Execute(); // key[input]. �ϸ� ȭ��ǥ



		//int a;
		//std::cout << "�Է���\n";
		//std::cin >> a;
	}
	void Update() {
		//std::cout << "Updatde��\n";
	}
	void Render() {
		//std::cout << "Render��\n";
	}

	void Release() {

		//std::cout << "������\n";


		for (size_t i = 0; i < 5; i++) {
			delete(key[i]);
		}
	}




	class MGameLoop {
	public:
		bool isGameRunning = false;

		MGameLoop() { // �ϴ���  ������ �ϴ� �� ����

		}
		~MGameLoop() { // �Ҹ���

		}
		void Run() {

			isGameRunning = true;
			Initialize();
			while (isGameRunning) { //���⸦ ���ӷ�������Ѵ�
				Input(); //�ൿ�� �ް� �װ� �ٸ����� �����ش�
				Update();//���� �ൿ�� ������Ʈ ���ش�
				Render();//������Ʈ �Ȱ� ȭ�鿡 �������ִ°��� ������ �̴�
			}
			Release();
		}

	};
}