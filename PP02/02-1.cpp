#include <iostream>
#include <string>


//using namespace std;
//
//
// bool is_game_running = false; //전역변수
//
// class GameObjet {
//
// public:
//	 GameObjet() {
//		 cout << "게임오브젝트 생성\n";
//	 };
//	 virtual ~GameObjet() {
//		 cout << "게임 오브젝트 소멸\n";
//	 };
//	 virtual void Start() {
//		 cout << " 게임오브젝트 스타트\n";
//	 }
//	 virtual void Update() {
//		 cout << " 게임오브젝트 업데이트\n";
//	 }
//
//
// };
// class Player :public GameObjet {
//	public:
//	 int HP = 100;
//	 Player() {
//		 cout << "플레이어 생성\n";
//  }
//	 virtual ~Player() {
//		 cout << "플레이어 소멸\n";
//	 }
//	 virtual void Start() {
//		 cout << "플레이어의HP:" << HP << "입니다\n";
//	 }
//	 virtual void Update() {
//		 cout << "플레이어 업데이트\n";
//	 }
// };
// class Enemy :public GameObjet {
// public:
//	 int HP = 100;
//	 Enemy() {
//		 cout << "몬스터 생성\n";
//	 }
//	 ~Enemy() {
//		 cout << "몬스터 소멸\n";
//	 }
//	 void Start() {
//		 cout << "몬스터의HP:" << HP << "입니다\n";
//	 }
//	 void Update() {
//		 cout << "몬스터 업데이트\n";
//	 }
// };
//
//int main() {
////static 	bool is_game_state = false;//c에선 int가 더 빠름 bool이 메모리 더안먹음 전역변수랑 비슷한 느낌
//	is_game_running = true;
//	
//
//
//	GameObjet*p = new Player();// 이런식으로 하면 게임 오브젝트만 삭제되서 메모리 누수 가능
//	GameObjet*e = new Enemy();
//
//	
//	
//	p->Start();
//	e->Start();
//
//	while (is_game_running){
//		p->Update();
//		e->Update();
//		cout << "입력하세요:1:게임 종료 , 2: 게임 계속:";
//		int input;
//		cin >> input;//cin 콘솔로부터 값을 받아오겠다
//		if (input == 1)
//			is_game_running = false;
//
//	}
//	delete(p);
//	delete(e);
//
//	return 0;
//
//}