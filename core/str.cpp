#include "pch.h"
#include "str.h"

namespace lumin
{
	str::str()
	{
		content = "";
	}

	str::str(std::string text)
	{
		content = text;
	}
}