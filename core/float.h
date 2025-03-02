#pragma once

#include <iostream>

namespace lumin
{
	class num_float
	{
	public:
		num_float() {};
		num_float(float num) { content = num; };

		float content = 0;
	};
}