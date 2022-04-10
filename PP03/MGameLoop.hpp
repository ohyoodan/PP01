#pragma once
#pragma once



namespace Musoeun {

	MCommand* key[5];//포인트 방식으로 만들어야 다양하게 쓸수 있다

	void Initialize() {
		key[0] = new LeftCommand();
		key[1] = new RightCommand();
		key[2] = new JumpCommand();
		key[3] = new DownCommand();
		key[4] = new RunCommand();
		//std::cout << "초기화중\n";
	}

	void Input() {

		int input;
		std::cin >> input;;
		key[input]->Execute(); // key[input]. 하면 화살표



		//int a;
		//std::cout << "입력중\n";
		//std::cin >> a;
	}
	void Update() {
		//std::cout << "Updatde중\n";
	}
	void Render() {
		//std::cout << "Render중\n";
	}

	void Release() {

		//std::cout << "삭제중\n";


		for (size_t i = 0; i < 5; i++) {
			delete(key[i]);
		}
	}




	class MGameLoop {
	public:
		bool isGameRunning = false;

		MGameLoop() { // 일단은  생성자 하는 일 없다

		}
		~MGameLoop() { // 소멸자

		}
		void Run() {

			isGameRunning = true;
			Initialize();
			while (isGameRunning) { //여기를 게임루프라고한다
				Input(); //행동을 받고 그걸 다른곳에 나눠준다
				Update();//받은 행동를 업데이트 해준다
				Render();//업데이트 된걸 화면에 구현해주는것이 렌더링 이다
			}
			Release();
		}

	};
}