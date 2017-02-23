#include "ClientSocket.h"
#include "SocketException.h"
#include <iostream>
#include <string>

int main ( int argc, int argv[] )
{
    std::cout << "Attempting connection to server...\n";
    std::cout << "If no response, please try again later\n\n";
    try
    {

      //ClientSocket client_socket ( "localhost", 30000 );
      ClientSocket client_socket ( "192.168.1.113", 30000 );

      std::string reply;
     
        try
        {
            client_socket << "**INFO SENT FROM CLIENT**";
            client_socket >> reply; //REPLY SENT FROM SERVER


        }
        catch ( SocketException& ) {}


        std::cout << reply;

        try
        {
            client_socket >> reply;    

        }
        catch ( SocketException& ) {}

        std::cout << reply;
    }
    
    catch ( SocketException& e )
    {
      std::cout << "Exception was caught:" << e.description() << "\n";
    }
  
  while (true){
      
  }

  return 0;
    
}