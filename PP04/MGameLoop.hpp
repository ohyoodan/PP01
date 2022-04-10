#pragma once
#include <iostream>
#include <Windows.h>
#include <chrono>//새로운 라이브러리 시간관련
#include <thread>

using namespace std;

namespace Museoun_Engine

{

	class MGameLoop {
	private:
		bool _isGameRunning;
	public:
		MGameLoop() {
			_isGameRunning = true;
		};
		~MGameLoop() {};

		void Run() {

			_isGameRunning = true;
			Initialize();
			while (_isGameRunning) {
				Input();
				Update();
				Render();
			}
			Release();
		}

		void Stop() {

			_isGameRunning = false;
		}


	private:



		void Initialize() {

			SetCursorState(false);
		}

		void Input() {
			if (GetAsyncKeyState(VK_SPACE) == -0x8000 || GetAsyncKeyState(VK_SPACE) == -0x8001) {//c라이브러리 특성상 음수임

			}
			else {


			}
		}
		void Update() {


		}
		void Render() {
			chrono::system_clock::time_point startRenderTimePoint = chrono::system_clock::now(); // os시계에서 가져와서 스타트 랜더에서 관리 = now는 지금


			//system("cls");
			cout << "Rendering...";

			//if(isKeyPressed) {
			//	COORD playerPosition = { playerCoordX,playerCoordY };
			//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), playerPosition);              //콘솔창 커서 위치 결정하는 함수 스탠다드 핸들을 가지고옴
			//	cout << "P";
			//	isKeyPressed = false;
			// }

			chrono::duration<double> renderDuration = chrono::system_clock::now() - startRenderTimePoint; // duration이 시간재주는 것
			cout << "Rendering speed:" << renderDuration.count() << "sec" << endl;

			int remainingFrameTime = 100 - (int)(renderDuration.count() * 1000.0);
			if (remainingFrameTime > 0) {
				//Sleep(remainingFrameTIme);//윈도우의 타이머 와 c++스탠다드하고 맞춰줘야함 그래서 안쓴데
				this_thread::sleep_for(chrono::milliseconds(remainingFrameTime));
			}

			//Sleep(100 - (DWORD)(renderDuration.count() * 1000.0)); //밀리세컨트 를 한단위로한다. //10밀리세컨트에서 걸린시간만큼 빼준다

		}

		void Release() {}




	private: //게임 사용 함수

		void MoveCursor(short x, short y)
		{
			COORD position = { x,y };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position); //윈도우 h에서 가져옴


		}


		void SetCursorState(bool visible) {

			//HANDLE hConsole; h콘솔이라는게 있다 이런게 있다수준
			//hConsole = GetStdHandle(STD_OUTPUT_HANDLE);// 출력에 대한 핸들을 가지고온다

			CONSOLE_CURSOR_INFO ConsoleCursor;
			ConsoleCursor.bVisible = visible;
			ConsoleCursor.dwSize = 1;// 커서에는 사이즈가 있다
			SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);//레퍼런스 보내버렸음 &가 //깜박이지 말라고 
		}


	};

}

