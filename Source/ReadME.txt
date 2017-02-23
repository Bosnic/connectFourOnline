4.2 Compile and Test

Compiling is simple. First save all of the project files into one subdirectory, then type the following at your command prompt:


prompt$ cd directory_you_just_created
prompt$ make

This will compile all of the files in the project, and create the simple_server and simple_client output files. 
To test these two output files, run the server in one command prompt (admin cmd prompt if connecting across network), 
and then run the client in another command prompt:


first prompt:
prompt$ ./simple_server
running....



second prompt:
prompt$ ./simple_client
We received this response from the server:
"Test message."
prompt$
The client will send data to the server, read the response, and print out the response to std output as shown above. 
You can run the client as many times as you want - the server will respond to each request.