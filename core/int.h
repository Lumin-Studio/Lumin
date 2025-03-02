#pragma once

#include <iostream>

namespace lumin
{
	class num_int
	{
	public:
		num_int() {};
		num_int(int num) { content = num; };

		int content = 0;
	};
}