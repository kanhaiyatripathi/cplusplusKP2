#include <iostream>
#include <ctime>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int main()
{
	int hour;
	int minute;
	int second;
	int sec = 1000000;
	for(int x = 0; x < 12;)
	{
		time_t now = time(0);
		tm* ltm = localtime(&now);
		hour = ltm->tm_hour;
		minute = ltm->tm_min;
	    second = ltm->tm_sec;
		string tim;
		if(hour > 12)
		{
			hour = hour - 12;
			tim = " PM";
		}
		else
		{
			tim = " AM";
		}
		cout << "" << hour << ":" << minute << ":" << second << " " << tim << endl;;
		usleep(sec);
		system("clear");
	}
}