
#include "rtserver/RealtimeServer.hpp"


int main(){
    RealtimeServer server(12345, 4);
    server.start();
    
    while (true)
    {
        std::this_thread::yield();
    }
    
    return 0;
}