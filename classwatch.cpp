#include <iostream>
#include <string>
using namespace std; 

class watch
{   public:
        int hour;
        int minute;
        int second;
        watch(int h, int m, int s )
	{
		hour = h;
		minute = m;
		second = s;
	}
        void getTime( ) {
	cout << "hour:" <<hour<< " minute: " <<minute<< " second: " <<second<<endl;
}
};

int main()
{ watch Time(11, 26, 45);
  Time.getTime( );
return 0;
}





