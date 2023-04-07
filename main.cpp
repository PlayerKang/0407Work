#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Ball.h"


using namespace std;

int main()
{
	FBall TodayBall[45];
	for (int i = 0; i < 45; i++)
	{
		TodayBall[i].Number = i + 1;
	}

	srand((unsigned int)time(NULL));

	int DrawCount = 0;

	while(DrawCount != 6)
	{
		int NowNumber;
		NowNumber = TodayBall[rand() % 45].Number;

		if (NowNumber != 0)
		{
			TodayBall[NowNumber - 1].Number = 0;
			cout << NowNumber << endl;
			DrawCount += 1;
		}
	}


	return 0;
}