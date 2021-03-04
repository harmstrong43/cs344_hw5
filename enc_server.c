#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <fcntl.h>

//Encoding
//Listen to assigned port/socket
    //If there's a network error, outputs an error
    //Connection made -> 
    //call "accept" to gen the socket for communication
    //use a separate provess for the rest  of the servicing for this client connection
//Child process communicates with enc_client - verify that
//Child gets plaintext and key from enc_client
    //Key passed must be as big as plaintext
//Child writes chiphertest to enc_client process

//Must support up to 5 concurrent sockets

int main(int argc, char* argv[])
{
    int socket_num;
    int status;
    //IP will be localhost

    if(arc >= 1)
    {
        socket_num = argv[1];
    }

    //Create background process
    pid_t spawnPID = fork(); // Replace the current program with a child process
    spawnPID = waitpid(spawnPID,status,WNOHANG);
}