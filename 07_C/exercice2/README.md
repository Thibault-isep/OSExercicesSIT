# OSExercicesSIT
## OS exercices for SIT semester - Thibault CHANIER

**Description**

This program sends the contents of a file to a server over a socket connection. It reads the file line by line and sends each line to the server. It then prints the response from the server.

You can modify the file content by editing / adding any file you want, but make sure to call it right when running the program.

**Compiling and Running the Program**
- To compile the program, use the following command:
gcc -o client echo-client.c

- To run the program, use the following command:
./client [host] [port] [file]
where [host] is the IP address of the server, [port] is the port number, and [file] is the name of the file to be sent.

**Example**

Here is an example of how to run the program:

./client 172.21.39.31 8888 src.txt
This will send the contents of the src.txt file to the server running on 172.21.39.31 at port 8888.

**Notes**
- Make sure that the server is running and listening on the specified port before running the program.
- The program expects the server to send a response after each line of the file is sent.