#include "pch.h"
#include "../MathInternal/MyMathLib.hpp"
TEST(myMath, sqrt9)
{
	ASSERT_EQ(mySqrt(9), 3);
}