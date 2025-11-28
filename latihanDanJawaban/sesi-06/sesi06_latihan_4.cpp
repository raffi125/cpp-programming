#include <iostream>
#include <ctime>

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

using namespace std;

void cetakWaktu(){
    int last_minute = -1; 

    cout << "Program berjalan... menunggu interval waktu yang sesuai (kelipatan 5 menit)." << endl;

    while (true) {
        time_t now = time(0);
        tm *ltm = localtime(&now);

        if (ltm->tm_min % 5 == 0 && ltm->tm_min != last_minute) {
            
            cout << "\n===================================" << endl;
            cout << "Tahun: " << 1900 + ltm->tm_year << endl;
            cout << "Bulan: " << 1 + ltm->tm_mon << endl;
            cout << "Hari : " << ltm->tm_mday << endl;
            
    
            cout << "Waktu: " << ltm->tm_hour << ":";
            if (ltm->tm_min < 10) cout << "0"; 
            cout << ltm->tm_min << ":";
            if (ltm->tm_sec < 10) cout << "0";
            cout << ltm->tm_sec << endl;

            char* dt = ctime(&now);
            cout << "Lokal: " << dt; 

            tm *gmtm = gmtime(&now);
            dt = asctime(gmtm);
            cout << "UTC  : " << dt; 
            cout << "===================================" << endl;

            last_minute = ltm->tm_min;
        }

        #ifdef _WIN32
            Sleep(1000); 
        #else
            sleep(1); 
        #endif
    }
}

int main() {
    cetakWaktu();
    return 0;
}