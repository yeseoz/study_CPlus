#pragma once
#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include"code44_Point.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;

public:
	bool InitMembers(const Point &Ul, const Point &lr);
	void ShowRecInfo() const;
};

#endif