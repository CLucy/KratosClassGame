#include "Utils.h"
#include "Math.h"

bool Utils::CheckCollision(int x1, int y1, unsigned int r1, int x2, int y2, unsigned int r2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) <= r1 + r2;
}