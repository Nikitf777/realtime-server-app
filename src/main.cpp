#include "safe_ptr.h"
#include "ByteStream.hpp"
#include "rtserver/RealtimeServer.hpp"

int main(){
    //Hello::func();
    RealTimeServer server(12332, 4);
    server.listen();
    sf::safe_ptr<int> i;
    return 0;
}