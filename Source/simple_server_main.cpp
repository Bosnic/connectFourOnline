#include "ServerSocket.h"
#include "SocketException.h"
#include <string>
#include <iostream>

int main ( int argc, int argv[] )
{
  std::cout << "running....\n";

  try
    {
      // Create the socket
      ServerSocket server ( 30000 );

      while ( true ) {

	ServerSocket new_sock; //player1
        ServerSocket new_sock2; //player2
	server.accept ( new_sock );
        std::cout << "Just received input to new_sock\n";
          
	//try
	//{
	    //  while ( true )
		//{
		  std::string data; // data sent from player1
                  std::string reply1; // data sent to player1
                  
		  new_sock >> data;
                  
                  reply1 = "Player 1 (You) connected. Waiting for Player 2...\n";
		  new_sock << reply1;
		//}
	//}
	//catch ( SocketException& ) {}

      
      
      server.accept(new_sock2);
      std::cout << "Just received input to new_sock2\n";
      //try
	//{
	    //  while ( true )
		//{
		  std::string data2; // data sent from player2
                  std::string reply2; // data sent to player2
		  new_sock2 >> data2;
                  
                  
                  reply1 = "Player 2 connected. Waiting for your move: \n";
                  reply2 = "Player 2 (You) connected. Waiting for Player 1's move...\n";
                  
                  new_sock << reply1;
                  new_sock2 << reply2;
		//}
	//}
	//catch ( SocketException& ) {}
        
                  
                  
        while (true){ //temp loop
                      
        }
    }
        
        
}
  catch ( SocketException& e )
    {
      std::cout << "Exception was caught:" << e.description() << "\nExiting.\n";
    }

  return 0;
}
