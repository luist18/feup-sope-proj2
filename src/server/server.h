/**
 * @file    server.h
 * @brief   Methods related to the server side 
 * @date    2020-04-28
 */
#ifndef SERVER_H
#define SERVER_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <pthread.h>
#include <fcntl.h>

#include "../util/error.h"
#include "../util/utils.h"
#include "../util/message.h"

void read_arguments(int argc, char *argv[], int *number_of_seconds, char *fifoname);

void init_alarm();

void terminate(int signo);

void destroy_fifo();

void init_sigint();

void sigint_handler(int signo);

#endif