# OSExercicesSIT
## OS exercices for SIT semester - Thibault CHANIER

**Description**

This program sends the contents of user inputs over a socket connection. It reads each user input and send it to the server. It then prints the response from the server.

**Compiling and Running the Program**
- To compile the program, use the following command:
gcc -o client echo-client.c

- To run the program, use the following command:
./client [host] [port]
where [host] is the IP address of the server and [port] is the port number.

**Example**

Here is an example of how to run the program:

./client 172.21.39.31 8888
This will make you able to send input line to the server running on 172.21.39.31 at port 8888.

**Notes**
- Make sure that the server is running and listening on the specified port before running the program.
- The program expects the server to send a response after each input send by the user. If you type "exit", the connection will end.