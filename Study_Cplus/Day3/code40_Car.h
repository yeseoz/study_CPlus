#pragma once
#ifndef __CAR_H__ // CAR.H파일이 발견이 안되면 CAR.H 파일을 시작해라
#define __CAR_H__ // 중복을 방지하기 위해 사용됨

namespace CAR_CONST
{
	enum
	{
		ID_LEN=20, MAX_SPD=200, FUEL_STEP=2,
		ACC_STEP=10, BRK_STEP=10
	};
}

class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN]; // gamerID[20]
	int fuelGauge;
	int curSpeed;

public: 
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

#endif
