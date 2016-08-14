#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stddef.h>
#include <sys/types.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <sys/epoll.h>

#define MAX_PENDING_CONNS 100
#define MAX_DATASIZE 1024
#define MAX_EVENTS 100


uint8_t start_server(char *listen_host, char *listen_port);