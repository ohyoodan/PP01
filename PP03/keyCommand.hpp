#pragma once
#include "MCommand.hpp"
//�ִ� MCommand�� ��ӹ���
using namespace Musoeun;
class JumpCommand : public MCommand {

public:
	void Execute() {
		std::cout << "����\n";

	}
};

class RunCommand : public MCommand {

public:
	void Execute() {
		std::cout << "�޸���\n";
	}
};

class LeftCommand : public MCommand {

public:
	void Execute() {
		std::cout << "����\n";
	}
};

class RightCommand : public MCommand {

public:
	void Execute() {
		std::cout << "������\n";
	}
};

class DownCommand : public MCommand {

public:
	void Execute() {
		std::cout << "�Ʒ�\n";
	}
};
