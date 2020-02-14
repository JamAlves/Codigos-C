//#include<libwsock32.a>
#include<libws2_32.a>




int WSAStartup(

    WORD wversionRequested,
    LPWSADATA lpWSAData

);

int WSAGetLastError();

int WSACleanup();
