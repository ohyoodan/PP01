#pragma once
#include <iostream>
#include <Windows.h>
#include <chrono>//���ο� ���̺귯�� �ð�����
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
			if (GetAsyncKeyState(VK_SPACE) == -0x8000 || GetAsyncKeyState(VK_SPACE) == -0x8001) {//c���̺귯�� Ư���� ������

			}
			else {


			}
		}
		void Update() {


		}
		void Render() {
			chrono::system_clock::time_point startRenderTimePoint = chrono::system_clock::now(); // os�ð迡�� �����ͼ� ��ŸƮ �������� ���� = now�� ����


			//system("cls");
			cout << "Rendering...";

			//if(isKeyPressed) {
			//	COORD playerPosition = { playerCoordX,playerCoordY };
			//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), playerPosition);              //�ܼ�â Ŀ�� ��ġ �����ϴ� �Լ� ���Ĵٵ� �ڵ��� �������
			//	cout << "P";
			//	isKeyPressed = false;
			// }

			chrono::duration<double> renderDuration = chrono::system_clock::now() - startRenderTimePoint; // duration�� �ð����ִ� ��
			cout << "Rendering speed:" << renderDuration.count() << "sec" << endl;

			int remainingFrameTime = 100 - (int)(renderDuration.count() * 1000.0);
			if (remainingFrameTime > 0) {
				//Sleep(remainingFrameTIme);//�������� Ÿ�̸� �� c++���Ĵٵ��ϰ� ��������� �׷��� �Ⱦ���
				this_thread::sleep_for(chrono::milliseconds(remainingFrameTime));
			}

			//Sleep(100 - (DWORD)(renderDuration.count() * 1000.0)); //�и�����Ʈ �� �Ѵ������Ѵ�. //10�и�����Ʈ���� �ɸ��ð���ŭ ���ش�

		}

		void Release() {}




	private: //���� ��� �Լ�

		void MoveCursor(short x, short y)
		{
			COORD position = { x,y };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position); //������ h���� ������


		}


		void SetCursorState(bool visible) {

			//HANDLE hConsole; h�ܼ��̶�°� �ִ� �̷��� �ִټ���
			//hConsole = GetStdHandle(STD_OUTPUT_HANDLE);// ��¿� ���� �ڵ��� ������´�

			CONSOLE_CURSOR_INFO ConsoleCursor;
			ConsoleCursor.bVisible = visible;
			ConsoleCursor.dwSize = 1;// Ŀ������ ����� �ִ�
			SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);//���۷��� ���������� &�� //�������� ����� 
		}


	};

}

