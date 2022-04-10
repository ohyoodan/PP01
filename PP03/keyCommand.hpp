#pragma once
#include "MCommand.hpp"
//애는 MCommand는 상속받음
using namespace Musoeun;
class JumpCommand : public MCommand {

public:
	void Execute() {
		std::cout << "점프\n";

	}
};

class RunCommand : public MCommand {

public:
	void Execute() {
		std::cout << "달리기\n";
	}
};

class LeftCommand : public MCommand {

public:
	void Execute() {
		std::cout << "왼쪽\n";
	}
};

class RightCommand : public MCommand {

public:
	void Execute() {
		std::cout << "오른쪽\n";
	}
};

class DownCommand : public MCommand {

public:
	void Execute() {
		std::cout << "아래\n";
	}
};
