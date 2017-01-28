// FILE: throttle.cxx
// CLASS IMPLEMENTED: throttle (see throttle.h for documentation)

#include <cassert> // Provides assert
#include "stdafx.h"

#include "throttle.h" // Provides the throttle class definition

namespace main_savitch_2A
{
	throttle::throttle()
	{ //A simple on-off throttle
		top_position = 1;
		position = 0;
	}

	throttle::throttle(int size)
	// Library facilities used: cassert
	{
		assert(size > 0);
		top_position = size;
		position = 0;
	}

	void throttle::shift(int amount)
	{
		position += amount;
		if (position < 0)
			position = 0;
		else if (position > top_position)
			position = top_position;
	}
}