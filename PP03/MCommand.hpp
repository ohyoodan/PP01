
#pragma once

namespace Musoeun {
	class MCommand {
	public:
		MCommand() {}
		virtual ~MCommand() {}
		virtual void Execute() {}// 버추얼 함수를 안써도 크게 문제는 되지않는다
	};
}
