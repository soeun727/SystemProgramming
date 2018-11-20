#include <iostream>
#include <string>
class watch
{   public:
        int hour;
        int minute;
        int second;
        watch(int h, int m, int s );
        void getTime( );
};
watch::watch(int h , int m, int s) {hour = h; minute = m; second = s;};
void watch::getTime() { };
 
int main()
{ int hour;
std::cout<<"hour: 11\n";

int minute;
std::cout<<"minute: 30\n";


int second;
std::cout<<"second: 54";

return 0;
}




