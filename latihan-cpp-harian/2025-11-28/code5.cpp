
#include <iostream>
#include <ctime>
#include <unistd.h> 
#include <windows.h> 
using namespace std;
int main() {
int last_minute = -1;
while (true) {

time_t now = time(0);
tm *ltm = localtime(&now);

if (ltm->tm_min % 1 == 0 && ltm->tm_min != last_minute) {

cout << "Tahun: " << 1900 + ltm->tm_year << endl;
cout << "Bulan: " << 1 + ltm->tm_mon << endl;
cout << "Hari: " << ltm->tm_mday << endl;
cout << "Waktu: " << ltm->tm_hour << ":";
cout << ltm->tm_min << ":";
cout << ltm->tm_sec << endl;

char* dt = ctime(&now);
cout << "Tanggal dan Waktu lokal adalah: " << dt << endl;

tm *gmtm = gmtime(&now);
dt = asctime(gmtm);
cout << "Tanggal dan waktu UTC adalah: " << dt << endl;

last_minute = ltm->tm_min;
}

#ifdef _WIN32
Sleep(1000); 
#else
sleep(1)
#endif
}
return 0;
